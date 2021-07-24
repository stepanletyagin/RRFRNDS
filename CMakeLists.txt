cmake_minimum_required(VERSION 3.17)
project(code)

set(CMAKE_CXX_STANDARD 14)

add_executable(code main.cpp main.h matrix_operations.cpp matrix_operations.h algorithms.cpp algorithms.h RRFRNDS.cpp RRFRNDS.h)