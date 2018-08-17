CMAKE_MINIMUM_REQUIRED(VERSION 3.8)

# Set the project name.
PROJECT (feline_exe)

# Allow the use of C++11 functionality
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

MESSAGE(STATUS "--- Building feline_exe ---")
MESSAGE(STATUS "")

# Preprocessor definitions
ADD_DEFINITIONS(-DUNICODE -D_UNICODE )

# ----------------------------------------
# Set the files part of the project. 
SET(SOURCE_FILES_FELINE_EXE "./main.cpp" "./cat_factory.cpp" "./cat_factory.h")

# ----------------------------------------
# Set the include directories.
# The project needs the headers for:
#  - Color text
#  - 'feline' header
#  - include dir for other types of cats (e.g. domestic_cat)
INCLUDE_DIRECTORIES(../cats_color
                    ../cats_lib/include
                    ../cats_domestic_lib/include
                    ../cat_felis/include
                    ../cats_felis_catus_lib/include
                    ../cats_herpailurus_yagouaroundi_lib/include
                    ../cats_lion/include
                    ../cats_puma_concolor_lib/include
                    ../cats_serval_lib/include
                    ../feline_catopuma_temminckii_lib/include
                    ../Lynx_Pardinus_lib/include)

# ----------------------------------------
# Set the output type for this project.
# This shall be an executable
ADD_EXECUTABLE(feline_exe ${SOURCE_FILES_FELINE_EXE})

# ----------------------------------------
# Link to dependencies
# This library depends on functionality contained in the other classes E.g. feline class.
# We don't have access to the feline class in this library, so import the binary code
# from another lib. 
# Note the cats_lib project shall generate a "feline_lib.lib" and "feline_lib.dll" files.
# That's the name of the dependency we need to use.
# Using the same name (E.g. see cats_domestic_lib) makes it easier to handle.
TARGET_LINK_LIBRARIES(feline_exe 
                      feline_lib 
                      cats_domestic_lib
                      cat_felis
                      cats_felis_catus_lib
                      cats_herpailurus_yagouaroundi_lib
                      cats_lion_lib
                      cats_puma_concolor_lib
                      cats_serval_lib
                      feline_catopuma_temminckii_lib
                      Lynx_Pardinus_lib)

#
# Set the default location of the output executable file.
# This should allow using CTRL+F5 in Visual Studio without having to copy dependencies.
#
SET (feline_project_out_dir "./../bin")

#
# Set the running directory when running in the Visual Studio IDE
#
SET (vs_props )
IF (MSVC)
  SET (vs_props VS_DEBUGGER_WORKING_DIRECTORY ${feline_project_out_dir}/$(Configuration))
ENDIF()

SET_TARGET_PROPERTIES (feline_exe 
    PROPERTIES 
        RUNTIME_OUTPUT_DIRECTORY ${feline_project_out_dir}
        ${vs_props}
        CXX_STANDARD 11
        CXX_STANDARD_REQUIRED YES
)

