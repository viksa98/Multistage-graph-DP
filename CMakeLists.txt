# cmake_minimum_required(VERSION <specify CMake version here>)
project(viksa_proekt)

set(CMAKE_CXX_STANDARD 17)

add_executable(viksa_proekt main.cpp Graph.cpp Graph.h min_cost.cpp min_cost.h max_profit.cpp max_profit.h)