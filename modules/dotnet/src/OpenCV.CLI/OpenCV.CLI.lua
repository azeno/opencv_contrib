project "OpenCV.CLI"
  
  kind "SharedLib"
  language "C++"
  location "."
  
  dependson { "OpenCV.Generator" }
  flags { "Unicode", "Symbols", "Managed" }

  usingdirs { libdir }
  
  -- usingdirs is only supported in per-file configs in our
  -- premake build. remove this once this support is added
  -- at the project level.
  
  -- configuration { "Main.cpp" }
    -- flags { "Managed" }
    -- usingdirs { libdir }

  -- configuration { "Parser.cpp" }
    -- flags { "Managed" }
    -- usingdirs { libdir }

  -- configuration { "Comments.cpp" }
    -- flags { "Managed" }
    -- usingdirs { libdir }
    
  -- configuration "vs*"
    -- buildoptions { clang_msvc_flags }
    -- files { "VSLookup.cpp" }
  
  files
  {
    "*.h",
    "*.cpp",
    "*.lua"
  }
  
  links
  {
    "opencv_core249"
  }