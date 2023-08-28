//
// Created by Momo on 2023/8/23.
//

#ifndef C___OSTREAM其他方法_H
#define C___OSTREAM其他方法_H
#include <iostream>

using namespace std;

void write_in_use () {
    string demo = "fuck\n";

    string demo2 = " you bitch\n";

    /* write() 函数打印一行
     * 第一个参数是 char 数组的地址
     * 第二个参数决定了输出多少个
     * */
    cout.write(demo.c_str(), 5);

    // write() 的嵌套使用
    cout.write(demo.c_str(), 4).write(demo2.c_str(), demo2.size());
}

// cout 显示浮点数的特点
void cout_refer_num() {
    double f1 = 1.200;  // 不显示末尾为0的部分
    cout << f1 << ":\n";
    cout << (f1 + 1.0 / 9.0) << ":\n";  // 最多显示末尾5个

    double f2 = 1.67E6;     // 整数部分六个数，才会使用科学记数法
    cout << f2 << ":\n";
    f2 += 1.0 / 9.0;
    cout << f2 << ":\n";    // 使用科学计数法的时候，小数很小的话，不会显示
    cout << (167.111 * 1.0e4) << ":\n";  // 科学计数法，只显示前六位


    double f3 = 2.3e-4;
    cout << f3 << ":\n";
    cout << f3 / 10 << ":\n";   // 科学技术法，小数也是只显示前5个
}

#endif //C___OSTREAM其他方法_H
