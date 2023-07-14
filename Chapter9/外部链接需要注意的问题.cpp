//
// Created by Momo on 2023/7/12.
// 这个文件是和 辅助文件.cpp 一起的

#include <iostream>

using namespace std;

// 多文件程序，不可以有同名的外部变量
//int demo1;  // 和辅助文件外部变量同名，编译的时候报错

// 解决多文件程序同名的方法
static int demo2;

// const 也和 static 一样都是不可链接的局部变量
//extern const int demo3;   // 这样只会报错，引用不可外链接的 const 常量

extern const int DEMO4;

int main() {
    cout << "DEMO4 = " << DEMO4 << endl;
    return 0;
}