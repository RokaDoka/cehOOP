cmake_minimum_required(VERSION 3.26)
project(ood_dijak)

set(CMAKE_CXX_STANDARD 17)

add_executable(ood_dijak main.cpp
        cpp/Dijak.cpp)
