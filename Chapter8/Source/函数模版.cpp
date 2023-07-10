//
// Created by Momo on 2023/7/9.
//

#include <iostream>
using namespace std;

// 函数模版
template <typename Anytype> // 建立一个模版，并为类型命名为 Anytype
void Swap(Anytype &a, Anytype &b) {
    Anytype temp = a;
    a = b;
    b = temp;
}

// C++98 用 class 声明模版的
template <class Anytype> // 建立一个模版，并为类型命名为 Anytype
void Swap_old(Anytype &a, Anytype &b) {
    Anytype temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10;
    int b = 20;

    float c = 30.0f;
    float d = 40.0f;

    Swap(a, b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    Swap_old(c, d);

    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

    return 0;
}