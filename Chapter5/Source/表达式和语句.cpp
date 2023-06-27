//
// Created by Momo on 2023/6/27.
//
#include<iostream>

int main() {
    int x = 100;
    std::cout << "The express x > 3 has the value: ";
    std::cout << (x > 3) << std::endl;
    std::cout << "The express x < 3 has the value: ";
    std::cout << (x < 3) <<std::endl;

    // 转换表达式输出结果为 True or False
    std::cout.setf(std::ios_base::boolalpha);
    std::cout << "The express x > 3 has the value: ";
    std::cout << (x > 3) << std::endl;
    std::cout << "The express x < 3 has the value: ";
    std::cout << (x < 3) <<std::endl;

    return 0;
}