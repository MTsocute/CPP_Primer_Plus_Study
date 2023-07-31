//
// Created by Momo on 2023/7/30.
//

#include "抽象基类.h"

int main() {
    // 下面这行代码会产生编译错误，因为 Shape 是抽象基类，不能实例化对象。
    // Shape shape;

    Circle circle;
    circle.draw();
    circle.displayInfo();

    // 抽象的好处就在于，它本身也是基类，所以他可以指向其派生类，方便管理
    // 但是我们要使用的其派生类的方法，我们仍然可以向下转换
    Shape * demo = new Circle;
    auto * demo2 = (Circle *) demo;
    demo2->say_sth();
    return 0;
}