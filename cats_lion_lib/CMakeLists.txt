CMAKE_MINIMUM_REQUIRED(VERSION 3.8)

PROJECT (cats_lion_lib)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

ADD_DEFINITIONS(-DUNICODE -D_UNICODE -DCATS_LION)

SET(SOURCE_FILES_LION 
  "./include/build_opts_lion.h"
  "./include/lion.h"
  "./src/lion.cpp")

INCLUDE_DIRECTORIES(
  ../cats_color
  ../cats_lib/include
  ./include 
  )

ADD_LIBRARY(cats_lion_lib SHARED
  ${SOURCE_FILES_LION})

TARGET_LINK_LIBRARIES(cats_lion_lib feline_lib)

SET (feline_project_out_dir "./../bin")

SET_TARGET_PROPERTIES (cats_lion_lib 
    PROPERTIES 
        RUNTIME_OUTPUT_DIRECTORY ${feline_project_out_dir}
        CXX_STANDARD 11
        CXX_STANDARD_REQUIRED YES
)