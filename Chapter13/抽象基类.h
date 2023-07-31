//
// Created by Momo on 2023/7/30.
//

#ifndef C___抽象基类_H
#define C___抽象基类_H

#include <iostream>

using namespace std;

// 有至少一个纯虚函数存在的类就是抽象基类
class Shape {
public:
    // 纯虚函数，表示这是一个抽象基类
    virtual void draw() const = 0;

    // 普通成员函数
    void displayInfo() ;

    virtual ~Shape();
};

// 具体类：是抽象类的派生类
class Circle : public Shape {
public:
    // 纯虚函数的实现
    void draw() const override;

    ~Circle() override;

    // 具体类中可以有抽象类中没有的方法
    void say_sth() const;
};



#endif //C___抽象基类_H
