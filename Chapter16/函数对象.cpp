//
// Created by Momo on 2023/8/17.
//

#include "函数对象.h"

void common_func() {
    MyFunctionObject myFuncObj; // 创建函数对象

    int result = myFuncObj(3, 5); // 调用函数对象
    std::cout << "Result: " << result << std::endl;

    tooBig<int> jud1(200);

    if (jud1.judge(300))
        std::cout << "The number is bigger\n";
    else
        std::cout << "Equal or smaller\n";
}

int main() {
    func_in_use();
    return 0;
}