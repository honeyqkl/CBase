cmake_minimum_required(VERSION 3.19)
project(hello C)

set(CMAKE_C_STANDARD 99)

add_executable(KaiWengLinkedList datastructure/KaiWengLinkedList.c)
add_executable(hello1 base/macroCommand.c)
add_executable(hello2 datastructure/sqList3.c)
add_executable(linkedListHasHeadNode datastructure/linkedListHasHeadNode.c)