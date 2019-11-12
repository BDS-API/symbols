cmake_minimum_required(VERSION 3.0)
project(bdsapi)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

file(GLOB_RECURSE SOURCES includes/*.h)
add_library(bdsapi SHARED ${SOURCES})

set_target_properties(bdsapi PROPERTIES LINKER_LANGUAGE CXX)