cmake_minimum_required(VERSION 3.31)

set(CMAKE_CXX_STANDARD 20)

project(main)

add_executable(main main.cpp
        my.h
        my.cpp
)