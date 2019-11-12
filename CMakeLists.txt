cmake_minimum_required(VERSION 3.0)
project(bdsapi)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

FILE(GLOB_RECURSE headers includes/*.h)
add_library(bdsapi SHARED ${headers})
