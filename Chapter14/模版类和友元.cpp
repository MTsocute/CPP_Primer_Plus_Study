//
// Created by Momo on 2023/8/7.
//

#include "模版类和友元.h"
#include "限制模版友元函数.h"
#include "非限制模版友元函数.h"

int main() {
    Mydemo<double> demo1(30);
    Mydemo<double> demo4(40);
    Mydemo<int> demo2(10);
    Mydemo<int> demo3(20);

    cout << add(demo3, demo2) << endl;



    HasFriendT<int> f1(10);
    HasFriendT<double> f2(20.123);

    report(f1, f2);
    return 0;
}
