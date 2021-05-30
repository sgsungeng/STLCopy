cmake_minimum_required(VERSION 3.17)
project(STLCopy)

set(CMAKE_CXX_STANDARD 14)
include_directories(./)

add_executable(STLCopy main.cpp debug/assertions.h debug/debug.h debug/macros.h bits/c++0x_warning.h)