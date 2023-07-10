//
// Created by Momo on 2023/7/10.
//
#include <iostream>

using namespace std;

namespace demo {
// 创建的一个模版，但是要求两个参数类型相同
    template<typename T>
    T add(T a, T b) {
        return a + b;
    }
}

/* 对比函数重载.cpp 的代码你就会明白了，实例化总得来说就是告诉模版那个T到底是啥类型
 * 而具体化更多用于模版重载，为了针对指定的类型进行不同的处理
 * */


int main() {
    // 两个不同类型的数据
    int a = 20;
    double b = 30.0f;

    // cout << "a + b = " << add(a, b) << endl; 这个会报错，因为参数类型不同
    // 我们可以使用实例化强制转换成 double 类型
    cout << "a + b = " << demo::add<double>(a, b) << endl;

    // 显示的就是说，告诉你我这里用的模版函数
    // 哪怕说有非模版函数完全匹配，也仍然会使用模版函数
    cout << "a + b = " << demo::template add<double>(a, b) << endl;

    return 0;
}