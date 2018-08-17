CMAKE_MINIMUM_REQUIRED(VERSION 3.8)

PROJECT(Lynx_Pardinus_lib)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

ADD_DEFINITIONS(-DUNICODE -D_UNICODE -DLYNX_PARDINUS_DLL)


SET(SOURCE_FILES_Lynx_Pardinus 
  "./include/build_opts_Lynx_Pardinus.h"
  "./include/Lynx_Pardinus.h"
  "./src/Lynx_Pardinus.cpp")


INCLUDE_DIRECTORIES(
  ../cats_color
  ../cats_lib/include
  ./include 
  )


ADD_LIBRARY(Lynx_Pardinus_lib SHARED
  ${SOURCE_FILES_Lynx_Pardinus})

TARGET_LINK_LIBRARIES(Lynx_Pardinus_lib feline_lib)


SET (feline_project_out_dir "./../bin")

SET_TARGET_PROPERTIES (Lynx_Pardinus_lib
    PROPERTIES 
        RUNTIME_OUTPUT_DIRECTORY ${feline_project_out_dir}
        CXX_STANDARD 11
        CXX_STANDARD_REQUIRED YES
)