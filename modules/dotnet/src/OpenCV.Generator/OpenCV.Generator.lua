project "OpenCV.Generator"

  kind "ConsoleApp"
  language "C#"
  location "."

  files { "**.cs" }
  excludes { "obj/**" }

  links
  {
    "System",
    "System.Core",
    "CppSharp",
    "CppSharp.AST",
    "CppSharp.Generator",
    "CppSharp.Parser"
  }
  
  configuration "*"
	  debugargs 
	  {
		"--includes=" .. opencv_incdir,
		"--headers=opencv2/core/core.hpp",
		"--outdir=" .. path.join(opencv_cli_dir, "Generated")
	  }
