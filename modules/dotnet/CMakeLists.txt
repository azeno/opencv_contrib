# ----------------------------------------------------------------------------
#  CMake file for the .NET language bindings
# ----------------------------------------------------------------------------

# Include extra CMake files
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

set(CSHARP_DOTNET_VERSION "v4.0.30319")

# Find C#
find_package(CSharp)
if(NOT CSHARP_FOUND OR NOT WIN32)
  ocv_module_disable(dotnet)
endif()

include(${CSHARP_USE_FILE})

set(the_description "The .NET language bindings")
ocv_add_module(dotnet BINDINGS opencv_core)

# Setup the generator project
set(CSHARP_PLATFORM "x86")
set(CSHARP_SOURCE_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/src/OpenCV.Generator)
set(CSHARP_BINARY_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

file(MAKE_DIRECTORY ${CSHARP_SOURCE_DIRECTORY})
file(MAKE_DIRECTORY ${CSHARP_BINARY_DIRECTORY})

file(GLOB_RECURSE generator_sources ${CSHARP_SOURCE_DIRECTORY}/*.cs)
file(GLOB_RECURSE excluded_sources ${CSHARP_SOURCE_DIRECTORY}/obj/*.cs)
list(LENGTH excluded_sources excluded_sources_length )
if(${excluded_sources_length} GREATER 0)
  list(REMOVE_ITEM generator_sources ${excluded_sources})
endif()

file(GLOB generator_deps ${CMAKE_CURRENT_SOURCE_DIR}/deps/*.dll)

list(APPEND generator_deps "System.Core.dll")

set (generator "opencv_dotnet_generator")
csharp_add_executable(
  ${generator}
  ${generator_deps}
  ${generator_sources}
)

# Setup the bindings project
set(opencv_hdrs
    "opencv2/core/core.hpp")
set(include_dirs
    "${OPENCV_MODULE_opencv_core_LOCATION}/include")
set(headers
  "${CMAKE_CURRENT_BINARY_DIR}/core.h"
  "${CMAKE_CURRENT_BINARY_DIR}/mat.h"
  "${CMAKE_CURRENT_BINARY_DIR}/operations.h"
)
set(sources
  "${CMAKE_CURRENT_BINARY_DIR}/core.cpp"
  "${CMAKE_CURRENT_BINARY_DIR}/mat.cpp"
  "${CMAKE_CURRENT_BINARY_DIR}/operations.cpp"
)
add_custom_command(
  OUTPUT ${headers} ${sources}
  COMMAND "${generator}.exe"
    --headers="${opencv_hdrs}" 
    --includes="${include_dirs}" 
    --outdir="${CMAKE_CURRENT_BINARY_DIR}"
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
  DEPENDS ${generator}
)
ocv_set_module_sources(
  HEADERS ${headers}
  SOURCES ${sources}
)
ocv_module_include_directories(
  "${CMAKE_CURRENT_SOURCE_DIR}/include"
  ${include_dirs}
)

ocv_create_module()

set_target_properties(${the_module} PROPERTIES VS_DOTNET_REFERENCES "System;System.Core")
set_target_properties(${the_module} PROPERTIES COMPILE_FLAGS "/clr /EHa")
set_target_properties(${the_module} PROPERTIES DEBUG_POSTFIX "d")

if(ENABLE_SOLUTION_FOLDERS)
  set_target_properties(${generator} PROPERTIES FOLDER "bindings")
  set_target_properties(${the_module} PROPERTIES FOLDER "bindings")
endif()