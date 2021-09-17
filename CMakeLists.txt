# cmake_minimum_required(VERSION <specify CMake version here>)
project(Lab1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Lab1
        Estudiante.cpp
        Estudiante.h
        main.cpp)
