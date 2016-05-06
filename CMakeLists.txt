cmake_minimum_required(VERSION 3.4)
project(FOR_CLION)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Date.h Student.h Crew.h)
add_executable(FOR_CLION ${SOURCE_FILES} main.cpp)