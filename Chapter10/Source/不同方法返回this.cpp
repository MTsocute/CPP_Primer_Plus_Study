//
// Created by Momo on 2023/7/16.
//
#include <iostream>
#include <string>

/* 了解一下什么事 this，this在类内部可以用
 * 大概像是这样子 MyDemo * this = Mydemo(自己的参数);
 * 所以 this 是一个类指针，*this 就是类本身
 * 我们就有三种返回自己的方法：
    * 1. 引用返回 (*this)
    * 2. 指针返回 this
    * 3. 赋值返回
 * */

class MyDemo {
public:
    MyDemo() {
        this->name = "Anonymous";
    }

    MyDemo(std::string name_str) {
        this->name = name_str;
    }

    MyDemo returnSelf1();

    MyDemo & returnSelf2();

    MyDemo * returnSelf3();

    const MyDemo & returnSelf4();

    void show_name() const; // 这个 const 代表: 使用函数的时候不修改里面的值

private:
    static const int MAX = 10;  // 如何创建类中的常量
    std::string name;
};

// 返回赋值
MyDemo MyDemo::returnSelf1() {
//    MyDemo temp = *this;
    return *this;
}
// 引用返回
MyDemo &MyDemo::returnSelf2() {
    return *this;
}

// 指针返回
MyDemo *MyDemo::returnSelf3() {
    return this;
}

inline void MyDemo::show_name() const {
    std::cout << this->name << std::endl;
}

// 可以看的出来，哪怕说我们是常量实例，我们还是可以通过成员函数修改变量
const MyDemo &MyDemo::returnSelf4() {
    this->name = "you are";
    return *this;
}


int main() {
    MyDemo demo1 = MyDemo("momo");
    MyDemo demo2 = MyDemo("sb");

    // self1 非 const 成员函数都不可以使用
    const MyDemo &self1 = demo1.returnSelf4();
    MyDemo * self2 = demo2.returnSelf3();

    self1.show_name();

    MyDemo * self3 = self2->returnSelf3();

    self3->show_name();

    return 0;
}