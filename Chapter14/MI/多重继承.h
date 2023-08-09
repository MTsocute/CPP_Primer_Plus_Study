//
// Created by Momo on 2023/8/4.
//

#ifndef C___多重继承_H
#define C___多重继承_H

#include <iostream>

using namespace std;

// ABC
class ABC {
public:
    virtual void display() = 0;
};

// 第一个基类
class Base1 : public ABC {
public:
    void display() override { cout << "This is Base1." << endl; }
};

// 第二个基类
class Base2 : public ABC {
public:
    void display() override { cout << "This is Base2." << endl; }
};

// 派生类，继承自 Base1 和 Base2
class Derived : public Base1, public Base2 {
public:
     void display() override { cout << "This is Derived." << endl; }
};


#endif //C___多重继承_H
