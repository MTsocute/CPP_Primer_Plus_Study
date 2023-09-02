//
// Created by Momo on 2023/8/30.
//
#include "prohibited_func.h"

void demo1() {
    demo d1(123, "momo");

    demo d2(321, "momo_cp");
    // 我们不可以使用构造复制函数
    // d2 = d1;

    // 但是我们可以使用右值引用另一个版本的
    d2 = std::move(d1);

    d2.show_info();
}


int main() {
    demo1();

    return 0;
}