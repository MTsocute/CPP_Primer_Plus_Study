//
// Created by Momo on 2023/7/4.
//
#include <iostream>
using namespace std;

// 内联函数要保证简单一点，而且一般都是当前文本作用域下用
// 可以包含到头文件中调用，函数要简单，不然又可能还不如普通函数
inline void func() { cout <<"inline function called\n"; }

#define FUNC { cout << "code block started\n"; }


int main() {
//     func();
    FUNC;
    return 0;
}