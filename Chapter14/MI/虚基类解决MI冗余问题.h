//
// Created by Momo on 2023/8/5.
//

#ifndef C___虚基类解决MI冗余问题_H
#define C___虚基类解决MI冗余问题_H

#include <iostream>

using namespace std;

// 虚基类
class VirtualBase {
public:
    int x;

    VirtualBase() : x(0) {}

    void show() {
        cout << "VirtualBase x: " << x << endl;
    }
};

// 第一个派生类
class Derived1 : virtual public VirtualBase {
public:
    Derived1() : y(0) {}

    void show() {
        cout << "Derived1 x: " << x << ", y: " << y << endl;
    }

protected:
    int y;
};

// 第二个派生类
class Derived2 : virtual public VirtualBase {
public:
    Derived2() : z(0) {}

    void show() {
        cout << "Derived2 x: " << x << ", z: " << z << endl;
    }

protected:
    int z;
};

// 多重继承，同时继承 Derived1 和 Derived2
class MultiDerived : public Derived1, public Derived2 {
public:
    using Derived1::y;
    using Derived2::z;
    // 这个函数的 x 本来是无法确定，由于虚基类的存在，这里最多就会是一份数据
    void show() {
        cout << "MultiDerived x: "
             << x << ", y: " << y << ", z: " << z << endl;
    }
};

#endif //C___虚基类解决MI冗余问题_H
