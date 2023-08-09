//
// Created by Momo on 2023/8/5.
//

#ifndef C___多重继承带来的问题_H
#define C___多重继承带来的问题_H

#include <iostream>

using namespace std;

// 基类
class Base {
public:
    int x;

    Base() : x(0) {}

    // 由于这个构造函数是通过派生类传递值，但是派生类不止一个，就会造成很多问题
    Base(int num) : x(num) {}

    virtual void show() { cout << "Base x: " << x << endl; }
};

// 第一个派生类
class Derived1 : public Base {
public:
    Derived1(int num = 0) : Base(num) {}
    void show() {
        cout << "Derived1 x: " << x << endl;
    }
};

// 第二个派生类
class Derived2 : public Base {
public:
    Derived2(int num = 0) : Base(num) {}
    void show() {
        cout << "Derived2 x: " << x << ", z: " << endl;
    }
};

// 多重继承，同时继承 Derived1 和 Derived2
class MultiDerived : public Derived1, public Derived2 {
public:
    // 这里的构造函数传递上去的值，就会造成冲突
    MultiDerived(int num1 = 0, int num2 = 0) :
        Derived1(num1), Derived2(num2) {}

    // 解决多值构造问题 MI 构造多值问题
    // 我们必须要显式的给出 Base() 在成员列表中，但是在非虚基类中是错误的
    MultiDerived(const Base & b, int num1 = 0, int num2 = 0) :
        Base(b), Derived1(num1), Derived2(num2) {}


    void show_sth() {
        // 继承的两个类都是同一个基类
        // x 这个参数多次继承，所以会存在二义性，不再知道是那个类的 x
        cout << "MultiDerived x: " << x << endl;

        // 多次继承同名成员函数问题
        // 由于多重继承，有多个 show() 方法，我们要用解析作用域来区别，用哪个的 show()
        show();
        // Base::show();
        // Derived2::show();
    }
};

#endif //C___多重继承带来的问题_H
