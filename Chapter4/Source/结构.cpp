//
// Created by Momo on 2023/6/24.
//
#include <iostream>

using namespace std;

struct bank_account {
    int account[20];
    string user_name;
};

void omit_struct() {
    // C++ 允许创建结构变量的时候不用 struct
    bank_account myAccount;
}

