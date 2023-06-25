//
// Created by Momo on 2023/6/24.
//
#include <iostream>

using namespace std;

// 对应数 0 ～ 7
enum spectrum { RED, BLUE, YELLOW, GREEN, ORANGE, WHITE, CYAN };

// 可以自定义枚举声明数对应的值
enum bits { one = 1, two = 2, four = 4, eight = 8 };

// 枚举也可以只显式声明其中一部分
// 注意 third 会是 101 first 是 0
enum listNumber { first, second = 100, third };


int main() {

    return 0;
}