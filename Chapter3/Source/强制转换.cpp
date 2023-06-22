#include <iostream>

int main() {
    // 隐式类型转换
    double price = 19.99;
    std::cout << "original price: " << price << std::endl;

    // 第一种转换方法
    int roundedPrice1 = (long) price;  // 显式将浮点数转换为整数
    std::cout << "price1: " << roundedPrice1 << std::endl;

    // 第二种转换方法
    int roundedPrice2 = long (price);  // 显式将浮点数转换为整数
    std::cout << "price2: " << roundedPrice2 << std::endl;

    return 0;
}