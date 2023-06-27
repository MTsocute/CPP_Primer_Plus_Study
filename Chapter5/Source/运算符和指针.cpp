//
// Created by Momo on 2023/6/27.
//
#include <iostream>

using namespace std;

int main() {

    double arr[5] = {1.1,1.2,1.3,1.4, 1.5}, *p;

    p = arr;

    // 前缀运算符和 * 同优先级，所以谁右谁先
    cout << ++*p << endl;   // --> 2.1
    cout << *++p << endl;   // --> 1.2

    // 后缀优先级是最大的
    cout << *p++ << endl;   // --> 1.2
    cout << *p << endl;     // --> 1.3

    // () 可以改变优先级
    cout << (*p)++ << endl;   // --> 1.3
    cout << *p << endl;     // --> 2.3

    return 0;
}