//
// Created by Momo on 2023/6/24.
//

#include <iostream>

using namespace std;

/* 解决需要转译的问题，减少输入量 */
void raw_string() {
    cout << "\"Hello\" is a good one to use \\n" << '\n';

    // 我们使用原生字符来减少 \ 的使用
    cout << R"("Hello" is a good one to use \n)" << '\n';
}

// cout 和 指针输出的调整
void pointer_and_string() {
    const char * p = "life is fucking moive";

    // cout 遇到指针一般打印存储在指针内部的地址，但是遇到字符串类型的指针就会打印字符串
    cout << p << endl;

    // 我们强制输出打印指针字符串存储的地址
    cout << (int *) p << endl;
}



int main() {
//    raw_string();
    pointer_and_string();
    return 0;
}