cmake_minimum_required(VERSION 3.25)

# 项目名称
project(CPP)

set(CMAKE_CXX_STANDARD 17)

# 第二章
add_executable(myfirstcpp Chapter2/Source/helloworld.cpp)

# 第三章
add_executable(limit Chapter3/Source/关于数的限制.cpp)
add_executable(number_system Chapter3/Source/不同进制下的int表示.cpp)
add_executable(morechar Chapter3/Source/cout的put方法.cpp)
add_executable(flimit Chapter3/Source/浮点数的限制.cpp)
add_executable(enforce_transform Chapter3/Source/强制转换.cpp)
add_executable(autoVar Chapter3/Source/auto变量.cpp)