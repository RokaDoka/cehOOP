cmake_minimum_required(VERSION 3.26)
project(objektivektor)

set(CMAKE_CXX_STANDARD 17)

add_executable(objektivektor main.cpp
        cpp/Dijak.cpp
        cpp/Oddelek.cpp)
