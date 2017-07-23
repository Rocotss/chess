cmake_minimum_required(VERSION 2.8.9)
project(ChessProj)

set (SRC main.cpp)

include_directories(libChess)

add_executable(Chess_test ${SRC})

add_subdirectory(libChess)

target_link_libraries(Chess_test Chess)
