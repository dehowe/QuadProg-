cmake_minimum_required(VERSION 3.24)
project(libtest)

set(CMAKE_CXX_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR})

add_executable(libtest main.cpp test.cpp test.h array.cpp array.h QuadProg++.cpp QuadProg++.h)

