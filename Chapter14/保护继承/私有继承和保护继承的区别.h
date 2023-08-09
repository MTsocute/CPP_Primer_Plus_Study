//
// Created by Momo on 2023/8/4.
//

#ifndef C___私有继承和保护继承的区别_H
#define C___私有继承和保护继承的区别_H

#include "基类.h"

class Derived : private Base {
private:
    // Base中的所有的
    // 正式应为如此，
public:
    // Base 中所有的成员在 Derived 里面都是私有的
    void useBaseFun() {
        Derived::publicMethod();    // 使用继承过来的方法
        Base::protectedMethod();
    }
};

// 但是继续用继承的话，对第三代类影响很大，因为所有的方法会继续变成私有方法
// 继承到 Derived 的 Base 的 publicMethod() 方法，变成了私有方法，所以无法直接访问
class ThirdGeneration : public Derived {
public:
    void useFunc() {
        // 继承私有继承的派生类的第三类，不可以使用父类的公共或者保护方法
//        Derived::publicMehtod();
//        Derived::protectedMehtod();
        Derived::useBaseFun();
    }
};

#endif //C___私有继承和保护继承的区别_H
