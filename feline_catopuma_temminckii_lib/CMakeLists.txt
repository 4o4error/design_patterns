CMAKE_MINIMUM_REQUIRED(VERSION 3.8)

PROJECT (feline_catopuma_temminckii_lib)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

ADD_DEFINITIONS(-DUNICODE -D_UNICODE -DCATS_CATOPUMA)

SET(SOURCE_FILES_CATOPUMA 
  "./include/build_opts_catopuma_temminckii.h"
  "./include/catopuma_temminckii.h"
  "./src/catopuma_temminckii.cpp")

INCLUDE_DIRECTORIES(
  ../cats_color
  ../cats_lib/include
  ./include 
  )

ADD_LIBRARY(feline_catopuma_temminckii_lib SHARED
  ${SOURCE_FILES_CATOPUMA})

TARGET_LINK_LIBRARIES(feline_catopuma_temminckii_lib feline_lib)

SET (feline_project_out_dir "./../bin")

SET_TARGET_PROPERTIES (feline_catopuma_temminckii_lib 
    PROPERTIES 
        RUNTIME_OUTPUT_DIRECTORY ${feline_project_out_dir}
        CXX_STANDARD 11
        CXX_STANDARD_REQUIRED YES
)