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

# 第五章
add_executable(express Chapter5/Source/表达式和语句.cpp)
add_executable(op_and_pointer Chapter5/Source/运算符和指针.cpp)
add_executable(comma_expression Chapter5/Source/逗号表达式.cpp)
add_executable(stringCompare Chapter5/Source/字符串比较的不同.cpp)
add_executable(time Chapter5/Source/时间单位的使用.cpp)
add_executable(foreachCPP11 Chapter5/Source/基于范围的for循环.cpp)
add_executable(while_and_string Chapter5/Source/单个字符循环读取.cpp)
add_executable(two_dimensional_arr Chapter5/Source/2D_array.cpp)

# 第六章
add_executable(cctypeStringLibrary Chapter6/Source/cctype字符串库.cpp)
add_executable(switch_and_enum Chapter6/Source/switch和enum搭配.cpp)
add_executable(deal_Error_Input Chapter6/Source/处理错误输入.cpp)
add_executable(write_file Chapter6/Source/写到文本文件中.cpp)
add_executable(read_file Chapter6/Source/读取文本文件.cpp)

# 第七章
add_executable(range_arr Chapter7/Source/使用数组区间的函数.cpp)
add_executable(func_and_2D_Array Chapter7/Source/函数和二维数组.cpp)
add_executable(stringAsReturn Chapter7/Source/字符串作为函数的返回值.cpp)
add_executable(structAsFuncParameter Chapter7/Source/结构作为函数参数.cpp)
add_executable(func_and_string Chapter7/Source/字符串作为函数参数.cpp)
add_executable(arrayAsFuncParameter Chapter7/Source/vector作为函数参数.cpp)
add_executable(func_arr Chapter7/Source/函数指针.cpp)
target_include_directories(func_arr PUBLIC Chapter7/Header)

# 第八章
add_executable(inline_func Chapter8/Source/内联函数.cpp)
add_executable(refer_variable Chapter8/Source/引用变量.cpp Chapter8/Source/swaps.cpp)
target_include_directories(refer_variable PUBLIC Chapter8/Header)
add_executable(struct_and_reference Chapter8/Source/引用用于结构体.cpp)
add_executable(func_return_reference Chapter8/Source/返回引用的函数.cpp)
add_executable(filefunc Chapter6/Source/文件处理函数.cpp)
add_executable(func_reload Chapter8/Source/函数重载.cpp)
add_executable(func_template Chapter8/Source/函数模版.cpp)
add_executable(template_reload Chapter8/Source/模版重载.cpp)
add_executable(difference_btw_template_Specialization_and_instantiation Chapter8/Source/模版实例化和具体化.cpp)

# 第九章
add_executable(extern_declaration Chapter9/support.cpp Chapter9/external.cpp)
add_executable(detail_of_multi_files Chapter9/外部链接需要注意的问题.cpp Chapter9/辅助文件.cpp)
add_executable(static_local_var Chapter9/无链接性的局部变量.cpp)
add_executable(link_C_in_CPP Chapter9/语言链接性/link_C.c Chapter9/语言链接性/link_C.h)
add_executable(new_supplement Chapter9/new补充.cpp)
add_executable(namespace Chapter9/命名空间.cpp)


# 第十章