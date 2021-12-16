# cmake_minimum_required(VERSION <specify CMake version here>)
project(CBase C)

set(CMAKE_C_STANDARD 99)

add_executable(main hello/head/main.c hello/head/number.c)
add_executable(array hello/base/array.c)