cmake_minimum_required(VERSION 3.24)
project(advent_of_code_2022)

# Latest C++ standard
set(CMAKE_CXX_STANDARD 23)

# Enable C++ modules support
if (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    add_compile_options(/experimental:module /c)
endif()

find_package(catch2 CONFIG REQUIRED)
find_package(fmt CONFIG REQUIRED)
find_package(range-v3 CONFIG REQUIRED)

include(CTest)
include(Catch)

add_subdirectory(aoc_06a)
#add_subdirectory(aoc_06a-modules)
add_subdirectory(aoc_06b)
