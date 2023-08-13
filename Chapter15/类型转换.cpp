//
// Created by Momo on 2023/8/13.
//
#include <iostream>

using namespace std;

class MyClass {
public:
    int value;

    explicit MyClass(int v) : value(v) {}

    void print() const { cout << "Value: " << value << endl; }
};

class Shape {
public:
    virtual void print() { std::cout << "This is a shape." << std::endl; }
};

// 没有多余数据的派生类别
class Circle : public Shape {
public:
    void print() override { std::cout << "This is a circle." << std::endl; }
};

// const_cast
void cancel_const() {
    const MyClass constObj(10);     // 常量对象，不可以修改其内部的成员
    constObj.print();  // 输出原始值

    // 但是我们可以使用 const_cast() 取消 const 限制
    auto &nonConstRef = const_cast<MyClass &>(constObj);
    nonConstRef.value = 20;  // 修改值

    constObj.print();  // 输出修改后的值
}

// static_cast() 一般用于执行显式的转换 (但是跨度还是尽量在同类型或is-a关系的)
// dynamic_cast() 有些类型非安全的是不转换的，但是static_cast() 可以强转，相当于显式转
void useOfStaticCast() {
    auto *shapeP = new Shape;
    // 相当于显示转换：（Circle *）shapeP; 实现基类转换成派生类
    auto *circleP = static_cast<Circle *>(shapeP);

    if (circleP) {
        circleP->print();
        delete circleP;
    } else {
        cout << "Failed to cast to Circle\n";
        delete shapeP;
    }
}


// reinterpret_cast()：比较灵活的大跨度转换
// 但是风险系数高，所以别优先使用

int main() {
//    cancel_const();
    useOfStaticCast();
    return 0;
}
