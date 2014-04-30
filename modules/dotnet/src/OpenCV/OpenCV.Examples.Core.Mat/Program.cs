using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using OpenCV.Cv;
using Core = OpenCV.Cv.core;
using System.IO;
using System.Diagnostics;

namespace OpenCV.Examples
{
    unsafe class Program
    {
        static Program()
        {
            var binPath = @"F:\vvvv\misc\opencv\build\install\x86\vc12\bin";
            var path = Environment.GetEnvironmentVariable("PATH");
            var newPath = string.Format("{0};{1}", path, binPath);
            Environment.SetEnvironmentVariable("PATH", newPath);
        }

        static void Main(string[] args)
        {
            Console.WriteLine(Core.GetBuildInformation());
            Mat mat = Mat.Eye(4, 4, 1);
            Console.WriteLine("M =");
            Console.Write(" ");
            Console.Write(mat);
            Console.ReadLine();
        }
    }
}
