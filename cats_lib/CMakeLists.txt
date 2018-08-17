CMAKE_MINIMUM_REQUIRED(VERSION 3.8)

SET (feline_project_name feline_lib)
PROJECT (${feline_project_name})

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

SET(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/../../cmake/;${CMAKE_MODULE_PATH}")

MESSAGE(STATUS "Building ${feline_project_name}")
MESSAGE(STATUS "")

# Preprocessor definitions
ADD_DEFINITIONS(-DUNICODE -D_UNICODE -DCATS_DLL)

# 
# -------------------------------------------------- File section ------------------------------------------------------
#
file(GLOB feline_SRC
"./src/*.cpp"
)

file(GLOB feline_INCLUDE
  "./include/*.h")

# More include directories.
INCLUDE_DIRECTORIES(../cats_color
                    ./include )
MESSAGE(STATUS "CMAKE_BUILD_TYPE: ${CMAKE_BUILD_TYPE}")

ADD_LIBRARY(${feline_project_name} SHARED ${feline_INCLUDE} ${feline_SRC})

#
# Link to dependencies
#
# none for now
#TARGET_LINK_LIBRARIES(${feline_project_name} ${guslibtest_project_DEPENDENCIES} )

#
# Set the default location of the output executable file.
#
IF (WIN32)
    IF (CMAKE_BUILD_TYPE STREQUAL "Release")
      SET (feline_project_out_dir "./../bin/Release")
    ELSE ()
      IF (CMAKE_BUILD_TYPE STREQUAL "Debug")
        SET (feline_project_out_dir "./../bin/Debug")
      ELSE ()
        SET (feline_project_out_dir "./../bin")
      ENDIF ()
    ENDIF ()
ELSE()
    SET (feline_project_out_dir "./../bin")
ENDIF()

#
# Set the running directory when running in the Visual Studio IDE
#
SET (vs_props )
IF (MSVC)
  SET (vs_props VS_DEBUGGER_WORKING_DIRECTORY ${feline_project_out_dir}/$(Configuration))
ENDIF()

SET_TARGET_PROPERTIES (${feline_project_name} 
    PROPERTIES 
        RUNTIME_OUTPUT_DIRECTORY ${feline_project_out_dir}
        ${vs_props}
        CXX_STANDARD 11
        CXX_STANDARD_REQUIRED YES
)

