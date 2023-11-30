cmake_minimum_required(VERSION 3.24)
project(libtestC C)

set(CMAKE_C_STANDARD 11)

link_directories(${PROJECT_SOURCE_DIR}/lib)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(libtestC main.c)

target_link_libraries(${PROJECT_NAME} libhellolib.a)