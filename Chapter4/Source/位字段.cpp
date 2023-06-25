//
// Created by Momo on 2023/6/24.
//
#include <iostream>

using namespace std;

// 创建一个位字段
struct MyBitField {
    unsigned int number: 5;
    unsigned int : 4;   // unused
    bool goodIn: 1;
};


int main() {
    MyBitField bitField {31, true};

    if (bitField.goodIn) {
        puts("life is fucking moive!");
        cout << "The number is " << bitField.number << endl;
    }

    return 0;
}



