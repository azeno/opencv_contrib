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
using OpenCV.Gen.Passes;
using CppSharp.Types;
using System.Text.RegularExpressions;

namespace OpenCV.Gen
{
    class Program
    {
        class OpenCV : ILibrary
        {
            public void Setup(Driver driver)
            {
                var options = driver.Options;
                options.GeneratorKind = GeneratorKind.CLI;
                options.LibraryName = "OpenCV";
                options.IncludeDirs.Add(@"F:\vvvv\misc\opencv\build\install\include");
                options.Headers.Add(@"opencv2\core\core.hpp");
                options.OutputDir = @"F:\vvvv\misc\opencv_contrib\modules\dotnet\src\OpenCV\OpenCV.CLI\Generated";
                options.GetIncludePath = unit => unit.FileNameWithoutExtension + ".h";
                //options.GenerateLibraryNamespace = false;
                options.GenerateFunctionTemplates = true;
                options.GenerateClassTemplates = true;
                options.GenerateConversionOperators = true;
                options.GenerateObjectOverrides = true;
                options.GenerateFinalizers = true;
                //options.Verbose = true;
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

        static void Main(string[] args)
        {
            ConsoleDriver.Run(new OpenCV());
            Console.ReadLine();
        }
    }
}
