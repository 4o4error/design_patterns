CMAKE_MINIMUM_REQUIRED(VERSION 3.8)

# Set the project name.
PROJECT (cats_felis_catus_lib)

# Allow the use of C++11 functionality
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Preprocessor definitions.
# For libraries make sure you include the macro definitions.
# This library exports a class to a DLL based on the "CATS_DOMESTIC" macro definition.
ADD_DEFINITIONS(-DUNICODE -D_UNICODE -DCATS_FELIS_CATUS)

# ----------------------------------------
# Set the files part of the project. 
SET(SOURCE_FILES_CATUS 
  "./include/build_opts_cats_felis.h"
  "./include/felis_catus_cat.h"
  "./src/felis_catus_cat.cpp")

# ----------------------------------------
# Set the include directories.
# The project needs the headers for:
#  - Color text
#  - 'feline' header
#  - own include dir, to allow the use of : #include "domestic_cat.h" instead of #include "include/domestic_cat.h"
INCLUDE_DIRECTORIES(
  ../cats_color
  ../cats_lib/include
  ./include 
  )

# ----------------------------------------
# Set the output type for this project.
# This shall be a shared library (a.k.a. a DLL for Windows systems)
ADD_LIBRARY(cats_felis_catus_lib SHARED
  ${SOURCE_FILES_CATUS})

# ----------------------------------------
# Link to dependencies
# This library depends on functionality contained in the feline class.
# We don't have access to the feline class in this library, so import the binary code
# from another lib. 
# Note the cats_lib project shall generate a "feline_lib.lib" and "feline_lib.dll" files.
# That's the name of the dependency we need to use.
TARGET_LINK_LIBRARIES(cats_felis_catus_lib feline_lib)

#
# Set the default location of the output executable file.
#
SET (feline_project_out_dir "./../bin")

SET_TARGET_PROPERTIES (cats_felis_catus_lib 
    PROPERTIES 
        RUNTIME_OUTPUT_DIRECTORY ${feline_project_out_dir}
        CXX_STANDARD 11
        CXX_STANDARD_REQUIRED YES
)

