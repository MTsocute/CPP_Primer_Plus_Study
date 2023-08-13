//
// Created by Momo on 2023/8/13.
//
#include <iostream>

using namespace std;


class Shape {
public:
    virtual void print() { std::cout << "This is a shape." << std::endl; }
};

// 没有多余数据的派生类别
class Circle : public Shape {
public:
    void print() override { std::cout << "This is a circle." << std::endl; }
};

// 有多余数据的派生类
class Square : public Shape {
public:
    void print() override { std::cout << "This is a Square" << std::endl; }
};


// dynamic_cast 实现安全基类的安全转换
/**
 * @brief dynamic_cast 转换基类指针对象到派生类
 * @tip 他是动态转换，不是强行转换，可以转换才允许，不然返回 null
 * */
void safe_change_class_type1() {
    // 由于Circle类和Shape类，差别不大，没有多余数据啥的，所以从基类转换到子类是允许的
    auto *shapePtr = new Circle;

    // dynamic_cast 转换格式
    auto *circlePtr = dynamic_cast<Circle *>(shapePtr);

    if (circlePtr)
        circlePtr->print();
    else
        std::cout << "Failed to cast to Circle." << std::endl;
    delete shapePtr;
}

// 一些不允许的非安全转换
void limited_class_cast() {
    // 基类对象转换成派生类对象是不允许的
    auto *shapePtr = new Shape;
    auto *cirPtr = dynamic_cast<Circle *>(shapePtr);

    if (cirPtr) {
        cirPtr->print();
    } else {
        cout << "Failed to cast to circle;\n";
    }

    // RTTI 只用于包含虚函数的类
    auto *circlePtr = new Circle;
    auto *squarePtr = dynamic_cast<Square *>(circlePtr);

    if (squarePtr) {
        squarePtr->print();
    } else {
        cout << "Failed to cast to Square;\n";
    }

    delete shapePtr;
    delete circlePtr;
}

int main() {
//    safe_change_class_type1();

    limited_class_cast();
    return 0;
}