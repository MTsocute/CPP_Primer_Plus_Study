//
// Created by Momo on 2023/8/31.
//

#include "继承构造函数.h"


int main() {
    derived1 d1;
    derived2 d2(30);

    d1.show_show_way();

    d2.talk_about();

    return 0;
}