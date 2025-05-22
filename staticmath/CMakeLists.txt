cmake_minimum_required(VERSION 3.30)
project(staticmath C)

set(CMAKE_C_STANDARD 11)

add_library(staticmath STATIC library.c)
