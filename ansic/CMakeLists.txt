cmake_minimum_required(VERSION 3.5)
project(ansic)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES one_word_per_line1_12.c)
add_executable(ansic ${SOURCE_FILES})