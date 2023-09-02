//
// Created by Momo on 2023/9/1.
//

#include "包装器.h"
// function 包装仿函数
void func_obj_and_function() {
    Demo2 d;

    // 第一种包装方法
    function<void(int)> f1 = bind(&Demo2::operator(), &d, placeholders::_1);

    // 第二种包装方法: 这个对于类的包装方法有奇效
    function<void(int)> f2 = [&d](int num) { d(num); };
}



int main() {
    // function 函数包装器: 相当于一个函数指针
    function<void(int)> f = show_number;
    f(114514);

    // function 包装匿名函数
    function<void(int)> f2 =
            [](int num) ->void { cout << "The num is: " << num << endl; };

    f2(119194);

    // function 包装类成员函数
    function<void(Demo*, int)> f3 = &Demo::saySth;   // 我们参数是引用类对象
    Demo d1;
    f3(&d1, 857857);    // 注意这里是取地址哈

    return 0;
}