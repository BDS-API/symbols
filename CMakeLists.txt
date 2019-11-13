cmake_minimum_required(VERSION 3.0)
project(bds-symbols CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

add_library(bds-symbols INTERFACE)

include_directories(includes)