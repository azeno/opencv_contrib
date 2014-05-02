newoption {
   trigger     = "outdir",
   value       = "path",
   description = "Output directory for the compiled executable"
}

newoption {
   trigger     = "opencv",
   value       = "path",
   description = "Path to OpenCV"
}

srcdir = "src"
outdir = iif(_OPTIONS["outdir"], _OPTIONS["outdir"], "bin")
libdir = "deps"
opencv = iif(_OPTIONS["opencv"], _OPTIONS["opencv"], "../../../opencv/build/install")
opencv_incdir = path.getabsolute(path.join(opencv, "include"))
opencv_bindir = path.getabsolute(path.join(opencv, "x86/vc12/bin"))
opencv_libdir = path.getabsolute(path.join(opencv, "x86/vc12/lib"))
opencv_gen_dir = path.getabsolute(srcdir .. "/OpenCV.Generator")
opencv_cli_dir = path.getabsolute(srcdir .. "/OpenCV.CLI")

solution "OpenCV"
  configurations { "Debug", "Release" }
  platforms { "x32" }
  
  targetdir (outdir)
  libdirs { libdir }
  
  configuration "Debug"
    flags { "Symbols" }
  
  configuration "Release"
    optimize "On"
  
  include (path.join(opencv_gen_dir, "OpenCV.Generator.lua"))
  include (path.join(opencv_cli_dir, "OpenCV.CLI.lua"))