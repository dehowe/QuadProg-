cmake_minimum_required(VERSION 3.24)
project(libtestc__)

set(CMAKE_CXX_STANDARD 17)

link_directories(${PROJECT_SOURCE_DIR}/lib)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(libtestc__ main.cpp)

target_link_libraries(${PROJECT_NAME} libtest.a)