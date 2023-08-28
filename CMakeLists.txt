cmake_minimum_required(VERSION 3.25)

# 项目名称
project(CPP VERSION 1.0)

# 版本限制为 17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -frtti")

## 第二章
#add_executable(myfirstcpp Chapter2/Source/helloworld.cpp)

## 第三章
#add_executable(limit Chapter3/Source/关于数的限制.cpp)
#add_executable(number_system Chapter3/Source/不同进制下的int表示.cpp)
#add_executable(morechar Chapter3/Source/cout的put方法.cpp)
#add_executable(flimit Chapter3/Source/浮点数的限制.cpp)
#add_executable(enforce_transform Chapter3/Source/强制转换.cpp)
#add_executable(autoVar Chapter3/Source/auto变量.cpp)

## 第四章
#add_executable(array Chapter4/Source/数组.cpp)
#add_executable(getline Chapter4/Source/读取一行.cpp)
#add_executable(mix_int_string Chapter4/Source/字符串获取存在的问题.cpp)
#add_executable(string Chapter4/Source/string的使用.cpp)
#add_executable(Raw Chapter4/Source/原生字符串.cpp)
#add_executable(struct Chapter4/Source/结构.cpp)
#add_executable(bitField Chapter4/Source/位字段.cpp)
#add_executable(enum Chapter4/Source/枚举.cpp)
#add_executable(new Chapter4/Source/new分配内存.cpp)
#add_executable(newArray Chapter4/Source/new创建动态数组.cpp)
#add_executable(pointerArr Chapter4/Source/指针数组.cpp)
#add_executable(vector Chapter4/Source/vector模版.cpp)
#add_executable(arrayTemple Chapter4/Source/array.cpp)

## 第五章
#add_executable(express Chapter5/Source/表达式和语句.cpp)
#add_executable(op_and_pointer Chapter5/Source/运算符和指针.cpp)
#add_executable(comma_expression Chapter5/Source/逗号表达式.cpp)
#add_executable(stringCompare Chapter5/Source/字符串比较的不同.cpp)
#add_executable(time Chapter5/Source/时间单位的使用.cpp)
#add_executable(foreachCPP11 Chapter5/Source/基于范围的for循环.cpp)
#add_executable(while_and_string Chapter5/Source/单个字符循环读取.cpp)
#add_executable(two_dimensional_arr Chapter5/Source/2D_array.cpp)

## 第六章
#add_executable(cctypeStringLibrary Chapter6/Source/cctype字符串库.cpp)
#add_executable(switch_and_enum Chapter6/Source/switch和enum搭配.cpp)
#add_executable(deal_Error_Input Chapter6/Source/处理错误输入.cpp)
#add_executable(write_file Chapter6/Source/写到文本文件中.cpp)
#add_executable(read_file Chapter6/Source/读取文本文件.cpp)

## 第七章
#add_executable(range_arr Chapter7/Source/使用数组区间的函数.cpp)
#add_executable(func_and_2D_Array Chapter7/Source/函数和二维数组.cpp)
#add_executable(stringAsReturn Chapter7/Source/字符串作为函数的返回值.cpp)
#add_executable(structAsFuncParameter Chapter7/Source/结构作为函数参数.cpp)
#add_executable(func_and_string Chapter7/Source/字符串作为函数参数.cpp)
#add_executable(arrayAsFuncParameter Chapter7/Source/vector作为函数参数.cpp)
#add_executable(func_arr Chapter7/Source/函数指针.cpp)
#target_include_directories(func_arr PUBLIC Chapter7/Header)

## 第八章
#add_executable(inline_func Chapter8/Source/内联函数.cpp)
#add_executable(refer_variable Chapter8/Source/引用变量.cpp Chapter8/Source/swaps.cpp)
#target_include_directories(refer_variable PUBLIC Chapter8/Header)
#add_executable(struct_and_reference Chapter8/Source/引用用于结构体.cpp)
#add_executable(func_return_reference Chapter8/Source/返回引用的函数.cpp)
#add_executable(filefunc Chapter6/Source/文件处理函数.cpp)
#add_executable(func_reload Chapter8/Source/函数重载.cpp)
#add_executable(func_template Chapter8/Source/函数模版.cpp)
#add_executable(template_reload Chapter8/Source/模版重载.cpp)
#add_executable(difference_btw_template_Specialization_and_instantiation Chapter8/Source/模版实例化和具体化.cpp)

# 第九章
#add_executable(extern_declaration Chapter9/support.cpp Chapter9/external.cpp)
#add_executable(detail_of_multi_files Chapter9/外部链接需要注意的问题.cpp Chapter9/辅助文件.cpp)
#add_executable(static_local_var Chapter9/无链接性的局部变量.cpp)
#add_executable(link_C_in_CPP Chapter9/语言链接性/link_C.c Chapter9/语言链接性/link_C.h)
#add_executable(new_supplement Chapter9/new补充.cpp)
#add_executable(namespace Chapter9/命名空间.cpp)

# 第十章
#add_executable(class_demo Chapter10/Source/类演示.cpp Chapter10/Header/类演示.h)
#add_executable(constructor_func Chapter10/Source/构造函数.cpp)
#add_executable(destructor_func Chapter10/Source/析构函数.cpp)
#add_executable(return_this Chapter10/Source/不同方法返回this.cpp)

# 第十一章
#add_executable(op_reload Chapter11/Source/运算符重载.cpp Chapter11/Header/运算符重载.h)
#add_executable(friend Chapter11/Source/友元.cpp)
#add_executable(transform_of_class Chapter11/Source/类的自动转换和强制转换.cpp)

# 第十二章
#add_executable(static_member_class Chapter12/Source/静态成员类.cpp)
#add_executable(cp_constructor_func
#        Chapter12/Source/复制构造函数.cpp
#        Chapter12/Header/复制构造函数.h)
#add_executable(equal_op Chapter12/Source/赋值运算符.cpp)
#add_executable(return_val Chapter12/Source/关于返回对象的说明.cpp
#        Chapter12/Header/return_val.h)
#add_executable(classPointer Chapter12/Source/指向对象的指针.cpp)
#add_executable(new_loc Chapter12/Source/再谈new定位.cpp)

# 第十三章
#add_executable(basic_class
#        Chapter13/一个简单基类的使用.cpp
#        Chapter13/一个简单的基类.cpp
#        Chapter13/一个简单的基类.h
#)
#add_executable(polymorphic_public_inheritance
#        Chapter13/多态公有继承.cpp
#        Chapter13/多态公有继承.h)
#add_executable(implicit_downcasting Chapter13/隐式向下转换.cpp)
#add_executable(proctected_class Chapter13/protected关键字的使用.cpp)
#add_executable(ABC
#        Chapter13/抽象基类.cpp
#        Chapter13/抽象基类.h
#        Chapter13/抽象基类_main.cpp)
#add_executable(dynamic_mem_allocate_and_friend_func
#        Chapter13/动态内存分配和友元继承demo.cpp
#        Chapter13/动态内存分配和友元继承demo.h)

# 第十四章
#add_executable(has_a
#        Chapter14/has_a关系类设计.cpp
#        Chapter14/has_a关系类设计.h)
#add_executable(private_inheritance
#        Chapter14/私有继承实现has-a关系.cpp
#        Chapter14/私有继承实现has-a关系.h)
#add_executable(protected_inheritance Chapter14/保护继承/保护继承.cpp )
#target_include_directories(protected_inheritance PUBLIC Chapter14/保护继承)
#add_executable(using_redefine_authority
#        Chapter14/使用using重新定义访问权限.cpp)
#add_executable(MI
#        Chapter14/MI/多重继承.cpp
#        Chapter14/MI/多重继承.h
#        Chapter14/MI/多重继承带来的问题.h
#        Chapter14/MI/虚基类解决MI冗余问题.h)
#add_executable(class_template
#        Chapter14/类模版.cpp)
#add_executable(array_template
#        Chapter14/数组模版.cpp
#        Chapter14/数组模版.h)
#add_executable(more_para_class_template Chapter14/使用多个类型参数.cpp)
#add_executable(partial_specialization Chapter14/部分具体化.cpp)
#add_executable(member_template
#        Chapter14/成员模版.cpp
#        Chapter14/成员模版.h)
#add_executable(template_as_para
#        Chapter14/模版作为参数.cpp
#        Chapter14/模版作为参数.h)
#add_executable(friend_template
#        Chapter14/模版类和友元.cpp
#        Chapter14/模版类和友元.h
#        Chapter14/限制模版友元函数.h
#        Chapter14/非限制模版友元函数.h)

# 第十五章
#add_executable(error1
#        Chapter15/异常处理.cpp
#        Chapter15/异常处理.h)
#add_executable(error2
#        Chapter15/异常的再抛出.cpp
#        Chapter15/异常的再抛出.h)
#add_executable(exception_override
#        Chapter15/创建自己的异常类.cpp)
#add_executable(catch_unexpected_err
#        Chapter15/捕获非标准的异常.cpp)
#add_executable(RTTI1
#        Chapter15/dynamic_cast类的转换.cpp)
#add_executable(RTTI2
#        Chapter15/typeid的使用.cpp)
#add_executable(type_change
#        Chapter15/类型转换.cpp)

# 第十六章 (全部都是STL的应用，我们再STL那本书中好好学习)
#add_executable(cin_and_string
#        Chapter16/string1.cpp)
#add_executable(smart_pointer
#        Chapter16/智能指针.cpp)
#add_executable(vector_in_use
#        Chapter16/向量模板的使用.cpp)
#add_executable(it_usage
#        Chapter16/迭代器的使用.cpp)
#add_executable(func_obj
#        Chapter16/函数对象.cpp
#        Chapter16/函数对象.h)
#add_executable(adaptable_generator
#        Chapter16/自适应生成器.cpp)
#add_executable(initializer_list
#        Chapter16/initializer_list的使用.cpp
#        Chapter16/initializer_list的使用.h)

# 第十七章
add_executable(ostream_method
        Chapter17/ostream其他方法.cpp
        Chapter17/ostream其他方法.h)
add_executable(cout_format
        Chapter17/cout输出格式的控制.cpp)
add_executable(cin_method
        Chapter17/cin的一些操作方法.cpp)
add_executable(file_IO
        Chapter17/文件简单IO.cpp)
add_executable(bin_file
        Chapter17/二进制文件IO.cpp)