//
// Created by Momo on 2023/8/7.
//

#include "模版作为参数.h"

int main() {

    MyStack<double> demo1;

    for (int i = 10; i < 20; i++){
        demo1.push(10.1231);
    }


    Crab<MyStack> nebula;


    for (int  i = 0; i < 10; i++)
        nebula.push(i);

    nebula.show_self();

    nebula.show_other_val(demo1);

    return 0;
}
