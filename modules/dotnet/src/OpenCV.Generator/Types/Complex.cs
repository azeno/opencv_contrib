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
    [TypeMap("cv::Complexd")]
    public class Complexd : TypeMap
    {
        public override string CLISignature(CLITypePrinterContext ctx)
        {
            return "System::Numerics::Complex";
        }

        public override void CLIMarshalToNative(MarshalContext ctx)
        {
            ctx.Return.Write("reinterpret_cast<cv:Complexd>({0})", ctx.Parameter.Name);
        }

        public override void CLIMarshalToManaged(MarshalContext ctx)
        {
            ctx.Return.Write("reinterpret_cast<System::Numerics::Vectors::Complexd>({0})", ctx.ReturnVarName);
        }
    }
}
