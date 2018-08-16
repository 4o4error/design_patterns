cmake_minimum_required(VERSION 3.0)


SET(PROJECT_NAME DESIGN_PATTERNS)

PROJECT(${PROJECT_NAME})

INCLUDE_DIRECTORIES(include)

# add files
SET(INCLUDE_FILES 
  include/appliance.h
  include/hot_drink.h
  include/tea.h
  include/coffee.h
)

set(SRC_FILES
    src/main.cpp
    src/appliance.cpp
    src/hot_drink.cpp
    src/tea.cpp
    src/coffee.cpp
)

# set out direcories
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/bin)


ADD_EXECUTABLE(${PROJECT_NAME} ${INCLUDE_FILES} ${SRC_FILES})