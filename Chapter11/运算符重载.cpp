//
// Created by Momo on 2023/7/17.
//

#include "运算符重载.h"

int main() {

    Time t1(1,20);
    Time t2(10, 17);

    Time t4 = t1 * 3;

    t4.Show();
    return 0;
}
