cmake_minimum_required(VERSION 3.0)

project(bds-symbols VERSION 1.13 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

add_library(bds-symbols INTERFACE)
target_include_directories(bds-symbols INTERFACE includes/)