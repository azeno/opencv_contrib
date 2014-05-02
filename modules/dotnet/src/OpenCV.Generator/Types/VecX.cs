using CppSharp.Generators;
using CppSharp.Generators.CLI;
using CppSharp.Types;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OpenCV.Generator.Types
{
    [TypeMap("cv::Vec2f")]
    public class VecX : TypeMap
    {
        public override string CLISignature(CLITypePrinterContext ctx)
        {
            return "System::Numerics::Vectors::Vector2f";
        }

        public override void CLIMarshalToNative(MarshalContext ctx)
        {
            ctx.Return.Write("reinterpret_cast<cv:Vec2f>({0})", ctx.Parameter.Name);
        }

        public override void CLIMarshalToManaged(MarshalContext ctx)
        {
            ctx.Return.Write("reinterpret_cast<System::Numerics::Vectors::Vector2f>({0})", ctx.ReturnVarName);
        }
    }
}
