//
// Created by Momo on 2023/8/21.
//

#include "initializer_list的使用.h"

int main() {
    MyClass obj1 = {1, 2, 3, 4, 5}; // 使用 initializer_list 构造函数
    obj1.printData();

    MyClass obj2 = {10, 20, 30}; // 使用 initializer_list 构造函数
    obj2.printData();
    return 0;
}
