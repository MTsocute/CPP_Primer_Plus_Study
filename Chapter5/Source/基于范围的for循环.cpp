//
// Created by Momo on 2023/6/27.
//
#include <iostream>
using namespace std;

// C11 根据范围遍历
void iter_arr_in_C11() {
    int arr[6] = {1,23,4,5,656,12};

    for (int x: arr) {
        cout << x << endl;
    }
}


// 结合引用来输出变量，这种可以改变值
void iter_with_address() {
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

    return 0;
}