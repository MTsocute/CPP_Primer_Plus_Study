//
// Created by Momo on 2023/6/28.
//

#include <iostream>

using namespace std;

// 利用二维数组，创建字符串数组
const char * stringArr[] {
    "life",
    "is",
    "fucking",
    "moive!"
};

// 等同于上面这个
const string stringArr2[] = {
    "life is what",
    "life is moive",
    "what kind of?",
    "fucking",
    "life is fucking moive"
};

// 非指针模式的只能一个个遍历
// 这种的二维数组，就是数组里面存储数组，
char cities[5][25] = {
    "life is what",
    "life is moive",
    "what kind of?",
    "fucking",
    "life is fucking moive"
};


int main() {
    for (const auto * p: stringArr) {
            cout << p << " ";
    }
    return 0;
}