set(CMAKE_CXX_STANDARD 11)
cmake_minimum_required(VERSION 3.10)

add_library(lastdb_lib "strlib.cpp")
target_include_directories(lastdb_lib PUBLIC .)

add_executable(lastdb main.cpp)

set_target_properties(lastdb_lib PROPERTIES LINKER_LANGUAGE CXX)
