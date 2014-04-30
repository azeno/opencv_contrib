using CppSharp.Generators;
using CppSharp.Generators.CLI;
using CppSharp.Passes;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OpenCV.Gen.Passes
{
    class FixIncludesPass : GeneratorOutputPass
    {
        public override void VisitGeneratorOutput(GeneratorOutput output)
        {
            var unit = output.TranslationUnit;
            if (unit.FileName == "core.hpp")
            {
                var sourceTemplate = output.Templates[1];
                var sourceIncludesBlock = sourceTemplate.FindBlock(CLIBlockKind.Includes);
                var sourceForwardRefsIncludesBlock = sourceTemplate.FindBlock(CLIBlockKind.IncludesForwardReferences);
                sourceForwardRefsIncludesBlock.WriteLine("#include \"mat.h\"");
                sourceForwardRefsIncludesBlock.WriteLine("#include \"operations.h\"");
            }
            else
            {
                var headerTemplate = output.Templates[0];
                var includesBlock = headerTemplate.FindBlock(CLIBlockKind.Includes);
                var includeCoreBlock = new Block();
                includeCoreBlock.WriteLine("#include \"core.h\"");
                includesBlock.InsertBlock(1, includeCoreBlock);

                //var sourceTemplate = output.Templates[1];
                //var sourceIncludesBlock = sourceTemplate.FindBlock(CLIBlockKind.Includes);
                //var sourceForwardRefsIncludesBlock = sourceTemplate.FindBlock(CLIBlockKind.IncludesForwardReferences);
                //sourceIncludesBlock.RemoveBlock(sourceForwardRefsIncludesBlock);
            }
            base.VisitGeneratorOutput(output);
        }
    }
}
