cmake_minimum_required(VERSION 3.25)

# 项目名称
project(C__)

set(CMAKE_CXX_STANDARD 17)

# 第二章



# 这个写了，#include 的时候路径就可以不用写一大堆了
target_include_directories(CPP PUBLIC
        Chapter2/Header
)