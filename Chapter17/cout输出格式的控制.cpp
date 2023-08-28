//
// Created by Momo on 2023/8/23.
//

#include <iomanip>
#include <iostream>

using namespace std;

// 不同进制的输出
void number_system() {
    int a = 10;
    cout << oct << a << endl; // 八进制
    cout << hex << a << endl; // 十六进制
}

// 控制字段的输出宽度
void width_in_use() {
    int num1 = 123;
    int num2 = 45678;

    cout.width(10); // 设置下一个输出字段的宽度为 10
    cout << num1 << endl;

    cout.width(10); // 设置下一个输出字段的宽度为 10
    cout << num2 << endl;
}

// 使用填充字符
void fill_in_use() {
    int num1 = 123;
    int num2 = 45678;

    cout.fill('*'); // 设置填充字符为 *
    cout << setw(10) << num1 << endl;

    cout.fill('#'); // 设置填充字符为 #
    cout << setw(10) << num2 << endl;
}

// 重新设置小数的精确程度
void precision_in_use() {
    cout.setf(ios_base::scientific);
    cout.precision(10);
    double a = 1.0, b = 3.0;
    cout << "Ans = " << a / b << endl;

    // 还原输出格式为默认
    cout.unsetf(ios_base::scientific);
    cout.precision(6);
    cout << "Ans = " << a / b << endl;
}


int main() {
//    number_system();

//    fill_in_use();

    precision_in_use();

    return 0;
}