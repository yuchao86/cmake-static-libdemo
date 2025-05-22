cmake_minimum_required(VERSION 3.30)
project(staticapp C)

# 添加库目标
set(CMAKE_C_STANDARD 11)
add_library(libstaticmath STATIC IMPORTED)

#set_target_properties(staticmath PROPERTIES IMPORTED_LOCATION libstaticmath.a)

# 链接库到可执行文件
add_executable(staticapp main.c)
target_link_libraries(staticapp staticmath)

