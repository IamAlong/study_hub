cmake_minimum_required(VERSION 2.7)

project(algorithm)

set(CMAKE_CXX_STANDARD 11)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_subdirectory(src)
add_subdirectory(demo)