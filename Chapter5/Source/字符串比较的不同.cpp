//
// Created by Momo on 2023/6/27.
//

#include <iostream>

using namespace std;

// char 数组字符串的比较不要使用 == 否则会达不到预期的想法
void wrong_compare_demo() {
    char arr1[5] = "mode";

    // 因为 C++ 把字符串常量带 "" 看作为一个地址
    // 然后 arr1 就是这个字符数组的首地址，arr1 不是指针而是一个栈区，一个自动变量存储着 mode 这个字符串
    // 相当于两个不同地址的比较，自然是不同的
    cout << (arr1 == "mode") << endl;
}

// string 可以使用 ==
void stringType_compare() {
    string arr1 = "demo";
    cout.setf(ios_base::boolalpha);    // 设置 bool 值为 True 或 False
    cout << (arr1 == "demo") << endl;
}


int main() {
    return 0;
}