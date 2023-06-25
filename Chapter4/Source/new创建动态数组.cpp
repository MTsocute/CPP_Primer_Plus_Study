//
// Created by Momo on 2023/6/25.
//

#include <iostream>

using namespace std;

void create_dynamic_array() {
    // 创建一个动态数组
    int *arr = new int[10];

    // 释放一个动态数组空间
    delete[]arr;
}

// 使用动态数组
void use_of_new_arr() {
    // 最好用 auto
    double * pt = new double [3];

    // 给动态数组赋值，操作基本和 malloc() 差不多
    pt[0] = 0.2;
    pt[1] = 0.3;
    pt[2] = 0.4;

    // 指针偏移至第三个位置
    cout << "Value = " << *(pt+2) << " p[2]: location = " << (pt+2) << endl;

    // 指针偏移至第二个位置
    pt++;
    cout << "Value = " << *pt << " p[1]: location = " << pt << endl;

    // 返回第一的位置
    pt = pt - 1;
    cout << "Value = " << *pt << " p[0]: location = " << pt << endl;
}



int main() {
    use_of_new_arr();
    return 0;
}