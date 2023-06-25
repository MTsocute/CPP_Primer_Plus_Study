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

# 第四章
add_executable(array Chapter4/Source/数组.cpp)
add_executable(getline Chapter4/Source/读取一行.cpp)
add_executable(mix_int_string Chapter4/Source/混合输入数字和字符串导致的问题.cpp)
add_executable(string Chapter4/Source/string的使用.cpp)
add_executable(Raw Chapter4/Source/原生字符串.cpp)
add_executable(struct Chapter4/Source/结构.cpp)
add_executable(bitField Chapter4/Source/位字段.cpp)
add_executable(enum Chapter4/Source/枚举.cpp)
add_executable(new Chapter4/Source/new分配内存.cpp)
add_executable(newArray Chapter4/Source/new创建动态数组.cpp)
add_executable(pointerArr Chapter4/Source/指针数组.cpp)
add_executable(vector Chapter4/Source/vector模版.cpp)
add_executable(arrayTemple Chapter4/Source/array.cpp)