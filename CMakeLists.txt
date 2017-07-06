cmake_minimum_required(VERSION 3.7)
project(CTutorial)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -Wall")

set(SOURCE_FILES  src/DumbExample.c src/DumbExample.h src/temperature_converter.h src/temperature_converter.c)
add_library(SOURCE ${SOURCE_FILES})
add_executable(CTutorial src/main.c)
target_link_libraries (CTutorial SOURCE)

include_directories("D:/Projects/Embedded/Libraries/Unity/src")
add_library(UNITY "D:/Projects/Embedded/Libraries/Unity/src/unity.c")

add_executable(CTutorialTest test/test_main.c test/test_temperature_converter.c test/test_temperature_converter.h)
target_link_libraries (CTutorialTest SOURCE UNITY)