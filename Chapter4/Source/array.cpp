//
// Created by Momo on 2023/6/25.
//
#include <iostream>
#include <array>

using namespace std;


// 创建 array 数组
void create() {
    // 用于不是动态分配内存，所以要提前声明大小
    array<int, 5> ai{};     // 创建一个长度为 5 的int array 数组

    array<double, 4> ad{1.2, 1.3, 1.4, 2.5};

    for (auto &var_double: ad) {
        double *ptr = &var_double;
        cout << "value = " << *ptr <<
             " location: " << ptr << endl;
    }

}

int main() {
    create();
    return 0;
}