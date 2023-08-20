//
// Created by Momo on 2023/8/21.
//

#ifndef C___INITIALIZER_LIST的使用_H
#define C___INITIALIZER_LIST的使用_H

#include <iostream>
#include <initializer_list>

class MyClass {
public:
    // initializer_list 接受一个 {} 列表用于构造函数
    MyClass(std::initializer_list<int> values) {
        for (int value: values)
            data.push_back(value);
    }

    void printData() const {
        for (int value: data)
            std::cout << value << " ";
        std::cout << std::endl;
    }

private:
    std::vector<int> data;
};

// ini_list 用于函数接受容器 或 {} 表
int my_sum(std::initializer_list<int> l) {
    int total = 0;
    for (auto cur = l.begin(); cur != l.end(); cur++)
        total += *cur;
    return total;
}

double my_average(const std::initializer_list<double> &l) // ini_list 引用传递容器 或 {} 表
{
    double ave = 0.0, count = 0.0;

    for (auto p: l) {
        ave += p;
        count ++;
    }

    return static_cast<double> (ave / count);
}

#endif //C___INITIALIZER_LIST的使用_H
