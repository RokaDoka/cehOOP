cmake_minimum_required(VERSION 3.26)
project(oddelek)

set(CMAKE_CXX_STANDARD 17)

add_executable(oddelek main.cpp
        cpp/dijak.cpp
        h/dijak.h
        cpp/odelek.cpp
        h/odelek.h
)
