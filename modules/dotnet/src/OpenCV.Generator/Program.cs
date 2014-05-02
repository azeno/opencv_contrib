using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using CppSharp;
using CppSharp.AST;
using CppSharp.AST.Extensions;
using CppSharp.Generators;
using CppSharp.Passes;
using OpenCV.Generator.Passes;
using CppSharp.Types;
using System.Text.RegularExpressions;
using Mono.Options;

namespace OpenCV.Generator
{
    class Program
    {
        class OpenCV : ILibrary
        {
            public readonly List<string> IncludeDirs = new List<string>();
            public readonly List<string> Headers = new List<string>();
            public string OutputDir;
            public bool Verbose;

            public void Setup(Driver driver)
            {
                var options = driver.Options;
                options.GeneratorKind = GeneratorKind.CLI;
                options.LibraryName = "OpenCV";
                options.IncludeDirs = IncludeDirs;
                options.Headers = Headers;
                options.OutputDir = OutputDir;
                options.GetIncludePath = unit => unit.FileNameWithoutExtension + ".h";
                //options.GenerateLibraryNamespace = false;
                options.GenerateFunctionTemplates = true;
                options.GenerateClassTemplates = false;
                options.GenerateConversionOperators = true;
                options.GenerateObjectOverrides = true;
                options.GenerateFinalizers = true;
                options.Verbose = Verbose;
            }

            public void SetupPasses(Driver driver)
            {
                driver.AddGeneratorOutputPass(new FixIncludesPass());
                driver.TranslationUnitPasses.RenameDeclsUpperCase(RenameTargets.Method | RenameTargets.Function | RenameTargets.Property | RenameTargets.Field);
            }

            public void Preprocess(Driver driver, ASTContext ctx)
            {
                // Ignore the C-API
                ctx.IgnoreHeadersWithName("core_c.h");
                ctx.IgnoreHeadersWithName("types_c.h");
                ctx.IgnoreHeadersWithName("highgui_c.h");
                ctx.IgnoreHeadersWithName("imgproc_c.h");

                // Ignore types we don't need in .NET anyway
                ctx.IgnoreClassWithName("cv::CommandLineParser");

                // Ignore functions which can't be resolved by linker
                foreach (var @class in ctx.FindClass("cv::Mat"))
                    foreach (var method in @class.Methods.Where(m => m.Name == "ones" || m.Name == "zeros"))
                        if (method.Parameters.Count == 3 && method.Parameters.Any(p => p.Type.IsPointer()))
                            method.ExplicityIgnored = true;
                foreach (var @class in ctx.FindClass("cv::MatConstIterator"))
                    foreach (var method in @class.Methods.Where(m => m.Name == "MatConstIterator"))
                        if (method.Parameters.Count == 2 && method.Parameters.All(p => p.Type.IsPointer()))
                            method.ExplicityIgnored = true;
                foreach (var @class in ctx.FindClass("cv::SparseMatIterator"))
                    foreach (var method in @class.Methods.Where(m => m.Name == "SparseMatIterator"))
                        if (method.Parameters.Count == 2 && method.Parameters.All(p => p.Type.IsPointer()))
                            method.ExplicityIgnored = true;
                foreach (var @class in ctx.FindClass("cv::SparseMatConstIterator"))
                    foreach (var op in @class.FindOperator(CXXOperatorKind.MinusMinus))
                        if (op.Parameters.Count == 0)
                            op.ExplicityIgnored = true;

                // Ignore cv::Exception for now
                ctx.IgnoreClassWithName("cv::Exception");
                
                // Ignore cv::AutoLock for now
                ctx.IgnoreClassWithName("cv::AutoLock");

                // Ignore const char* overloads - use std:string
                IgnoreSubscriptOverload(ctx, "cv::FileStorage");
                IgnoreSubscriptOverload(ctx, "cv::FileNode");

                // Ignore ctor for now - issues with pointer of pointer
                ctx.IgnoreClassMethodWithName("cv::NAryMatIterator", "NAryMatIterator");
               
                // Ignore couple of pointer of pointer overloads
                foreach (var unit in ctx.TranslationUnits)
                    foreach (var ns in unit.Namespaces)
                        foreach (var f in ns.Functions)
                            if (f.Parameters.Any(p => 
                                p.Type.IsPointer() && 
                                p.Type.GetPointee().IsPointer() && 
                                !p.Type.GetFinalPointee().IsPrimitiveType()))
                                f.ExplicityIgnored = true;

                // Ignore various template
                IgnoreTemplatesWithPattern(ctx, "^Ptr.*$");

                // Ignore various typedefs
                IgnoreTypeDefsWithPattern(ctx, "^Mat.*$");
                IgnoreTypeDefsWithPattern(ctx, "^Vec.*$");
                //IgnoreTypeDefsWithPattern(ctx, "^Point.*$");
                //IgnoreTypeDefsWithPattern(ctx, "^Scalar.*$");
                //IgnoreTypeDefsWithPattern(ctx, "^Rect.*$");
                //IgnoreTypeDefsWithPattern(ctx, "^Complex.*$");

                // Use Size not Size2i
                //IgnoreTypeDefsWithPattern(ctx, "^Size2i$");
            }

            private static void IgnoreTypeDefsWithPattern(ASTContext ctx, string pattern)
            {
                foreach (var unit in ctx.TranslationUnits)
                    foreach (var ns in unit.Namespaces)
                        foreach (var typeDef in ns.Typedefs)
                            if (Regex.IsMatch(typeDef.Name, pattern))
                                typeDef.ExplicityIgnored = true;
            }

            private static void IgnoreTemplatesWithPattern(ASTContext ctx, string pattern)
            {
                foreach (var unit in ctx.TranslationUnits)
                    foreach (var ns in unit.Namespaces)
                        foreach (var template in ns.Templates)
                            if (Regex.IsMatch(template.Name, pattern))
                                template.ExplicityIgnored = true;
            }

            public void Postprocess(Driver driver, ASTContext ctx)
            {
                // Comment to inpect issues of generator 
                SetPropertyReadOnly(ctx, "Cv::Mat", "Step");
                SetPropertyReadOnly(ctx, "Cv::Mat::MStep", "Buf");
                SetPropertyReadOnly(ctx, "Cv::NAryMatIterator", "Arrays");
                SetPropertyReadOnly(ctx, "Cv::SparseMat::Node", "Idx");
                SetPropertyReadOnly(ctx, "Cv::SparseMat::Hdr", "Size");

                // Print all the ignored classes
                var typePrinter = new CppTypePrinter(driver.TypeDatabase)
                { 
                    PrintScopeKind = CppTypePrintScopeKind.Local 
                };

                Console.WriteLine();
                foreach (var unit in ctx.TranslationUnits)
                {
                    if (!unit.IsGenerated || unit.IsSystemHeader) continue;
                    Console.WriteLine("---------------- Unit {0} ----------------", unit.FileName);
                    Console.WriteLine("- Ignored classes:");
                    foreach (var ns in unit.Namespaces)
                    {
                        foreach (var @class in ns.Classes)
                        {
                            if (!@class.Ignore) continue;
                            Console.WriteLine("    {0}", @class.QualifiedLogicalOriginalName);
                        }
                    }
                    Console.WriteLine();
                    Console.WriteLine("- Ignored methods:");
                    foreach (var ns in unit.Namespaces)
                    {
                        foreach (var @class in ns.Classes)
                        {
                            if (@class.Ignore) continue;
                            var ignoredMethods = @class.Methods
                                .Concat(@class.Templates.OfType<FunctionTemplate>()
                                    .Select(t => t.TemplatedFunction)
                                    .OfType<Method>())
                                .Where(m => m.Ignore);
                            if (ignoredMethods.Any())
                                Console.WriteLine("  - {0}", @class.QualifiedLogicalOriginalName);
                            foreach (var method in @ignoredMethods)
                            {
                                if (!method.Ignore) continue;
                                Console.Write("        ");
                                PrintMethod(typePrinter, method);
                            }
                        }
                    }
                    Console.WriteLine();
                    Console.WriteLine();
                }
            }

            private static void PrintMethod(CppTypePrinter typePrinter, Method method)
            {
                Console.Write("{0} {1} ({2})", GetString(typePrinter, method.ReturnType), method.Name,
                    string.Join(", ", method.Parameters
                        .Select(p => string.Format("{0} {1}", p.Type.Visit(typePrinter), p.Name))));
                if (method.IsConst)
                    Console.WriteLine(" const");
                else
                    Console.WriteLine();
            }

            private static string GetString(CppTypePrinter typePrinter, QualifiedType type)
            {
                try
                {
                    return type.Visit(typePrinter);
                }
                catch
                {
                    return "unsupported";
                }
            }

            private static void SetPropertyReadOnly(ASTContext ctx, string className, string propertyName)
            {
                foreach (var @class in ctx.FindClass(className))
                    foreach ( var property in @class.Properties.Where(p => p.Name == propertyName))
                        property.IsReadOnly = true;
            }

            private static void IgnoreSubscriptOverload(ASTContext ctx, string className)
            {
                foreach (var @class in ctx.FindClass(className))
                    foreach (var op in @class.FindOperator(CXXOperatorKind.Subscript))
                        if (op.Parameters.Any(p => p.Type.IsPointer()))
                            op.ExplicityIgnored = true;
            }       
        }

        static int Main(string[] args)
        {
            var showHelp = false;
            var opencv = new OpenCV();

            var p = new OptionSet() {
                { "headers=", "Semi-colon seperated list of header files",
                   v => opencv.Headers.AddRange(v.Split(';')) },
                { "includes=", "Semi-color seperated list of include directories",
                   v => opencv.IncludeDirs.AddRange(v.Split(';')) },
                { "outdir=", "The output directory",
                   v => opencv.OutputDir = v },
                { "v|verbose", "Verbose output",
                   v => { opencv.Verbose = v != null; } },
                { "h|help",  "Show this message and exit", 
                   v => showHelp = v != null },
            };

            try
            {
                p.Parse(args);

                if (showHelp)
                    return 0;

                if (opencv.Headers.Count == 0)
                    throw new OptionException("Missing required header files.", "headers");
                if (opencv.IncludeDirs.Count == 0)
                    throw new OptionException("Missing required include directories.", "includes");
                if (string.IsNullOrEmpty(opencv.OutputDir))
                    throw new OptionException("Missing required output directory.", "outdir");

                ConsoleDriver.Run(opencv);

                return 0;
            }
            catch (OptionException e)
            {
                Console.Write("OpenCV.Generator: ");
                Console.WriteLine(e.Message);
                Console.WriteLine("Try `OpenCV.Generator --help' for more information.");
                return -1;
            }
        }
    }
}
