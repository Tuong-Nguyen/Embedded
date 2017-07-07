cmake_minimum_required(VERSION 3.7)
project(CTutorial)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -Wall")

set(SOURCE_FILES  src/DumbExample.c src/DumbExample.h src/temperature_converter.h src/temperature_converter.c src/max_min_array.h src/max_min_array.c)
add_library(SOURCE ${SOURCE_FILES})
add_executable(CTutorial src/main.c)
target_link_libraries (CTutorial SOURCE)

include_directories("D:/Projects/Embedded/Libraries/Unity/src")
include_directories("D:/Projects/Embedded/Libraries/Unity/extras/fixture/src")
add_library(UNITY "D:/Projects/Embedded/Libraries/Unity/src/unity.c" "D:/Projects/Embedded/Libraries/Unity/extras/fixture/src/unity_fixture.c")


add_executable(CTutorialTest test/test_main.c test/test_temperature_converter.c test/test_max_min_array.c)
target_link_libraries (CTutorialTest SOURCE UNITY)

