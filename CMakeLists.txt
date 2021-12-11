cmake_minimum_required(VERSION 3.21)
project(AI_Takeover)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(AI_Takeover
        learning.cpp
        main.cpp
        learning.h
        grid.h
        grid.cpp)
