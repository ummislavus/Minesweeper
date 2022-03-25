cmake_minimum_required(VERSION 3.21)
project(Minesweeper)

set(CMAKE_CXX_STANDARD 17)

add_executable(Minesweeper main.cpp Map.cpp Map.h Game.cpp Game.h Field.cpp Field.h)
