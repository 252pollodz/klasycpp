cmake_minimum_required(VERSION 3.29)
project(objektylyw)

set(CMAKE_CXX_STANDARD 20)

add_executable(objektylyw klasyobjektowe.cpp
        Point.h
        Point.cpp)
