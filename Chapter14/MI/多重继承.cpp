//
// Created by Momo on 2023/8/4.
//

#include <iostream>
#include "多重继承.h"
//#include "多重继承带来的问题.h"
#include "虚基类解决MI冗余问题.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
    Derived d;

    // 由于多重继承，需要使用作用域运算符来访问特定基类的成员
//    d.Base1::display(); // 访问 Base1 类的 display() 成员
//
//    d.Base2::display(); // 访问 Base2 类的 display() 成员
//
//    d.display();        // 访问 Derived 类的 display() 成员


    MultiDerived md;
    md.Derived1::x = 10;
    md.Derived2::x = 30;
    md.y = 20;
    md.z = 40;

    md.show();           // 访问 MultiDerived 中的 show()

    return 0;
}