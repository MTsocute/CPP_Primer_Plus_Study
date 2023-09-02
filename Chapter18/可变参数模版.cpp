//
// Created by Momo on 2023/9/2.
//

#include <iostream>

// 递归终止函数
void print() { std::cout << std::endl; }  // 没有参数传入就是停止了

// 使用可变参数模板递归打印参数
template<typename T, typename... Args>
void print(T first, Args... args) {
    /*
     * 第一个参数 T first 会循环的读取 Args.. args
     * T 会不断读取 Args 的类型
     * first 会不断读取 args 的具体数据
     * 递归主要体现在于，我们 T 获取了 第一个，剩下的数量就是原先的-1 解包传递给 print()
     * 到最后就没有传递了，然后就结束了
     * */
    std::cout << first << ' ';  // 输出数据
    print(args...); // 参数列表解包
}

int main() {
    print(1, 2, 3, "Hello", 4.5);
    return 0;
}
