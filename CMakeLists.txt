# cmake_minimum_required(VERSION <specify CMake version here>)
project(c C)

set(CMAKE_C_STANDARD 99)

add_executable(c main.c test01.c hello/datastructure/QuickSort.c hello/datastructure/BinarySearch.c)
add_executable(base hello/exam/t2018-27.c hello/head/main.c hello/head/number.h)
add_executable(t2018-28 hello/exam/t2018-28.c)
add_executable(linkedList2 hello/datastructure/linkedList2.c)
add_executable(main hello/head/main.c hello/head/number.c)