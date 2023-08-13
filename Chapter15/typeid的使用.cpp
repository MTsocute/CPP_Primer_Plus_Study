//
// Created by Momo on 2023/8/13.
//
#include <iostream>

using namespace std;

class Shape {
public:
    virtual ~Shape() {}

    virtual void print() { std::cout << "This is a shape." << std::endl; }
};

class Circle : public Shape {
public:
    void print() override { std::cout << "This is a circle." << std::endl; }
};


int main() {
    Shape *shapePtr = new Circle;
    // typeid 构造的类对象，需要使用 type_info 类型来接受
    const std::type_info &typeInfo = typeid(*shapePtr);

    // typeid 类对象使用 name() 函数区别类型
    cout << "typeid 's name() function = " << typeInfo.name() << endl;

    if (typeInfo == typeid(Circle))
        std::cout << "The object is of type Circle." << std::endl;
    else if (typeInfo == typeid(Shape))
        std::cout << "The object is of type Shape." << std::endl;
    else
        std::cout << "The object is of an unknown type." << std::endl;

    delete shapePtr;
}