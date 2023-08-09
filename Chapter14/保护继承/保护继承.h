//
// Created by Momo on 2023/8/4.
//

#ifndef C___保护继承_H
#define C___保护继承_H

#include "私有继承和保护继承的区别.h"

// 使用保护继承从父类继承到的东西，会存储在 protected 下面，其派生类也是可以访问到的
class Derived2 : protected Base {
public:
    void useBaseFun() {
        Base::publicMethod();
        Base::protectedMethod();
    }
};


class ThirdGeneration2 : public Derived2 {
public:
    void useFunc() {
        Derived2::publicMethod();
        Derived2::useBaseFun();
    }
};

#endif //C___保护继承_H
