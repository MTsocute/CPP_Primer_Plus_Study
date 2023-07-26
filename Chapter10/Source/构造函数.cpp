//
// Created by Momo on 2023/7/16.
//
#include <iostream>

using namespace std;

class Person {

public:

    // 默认构造函数：就是这种不带参数的
    Person() {
        name = "Unknown";
        age = 0;
    }

    // 非默认构造函数：
    // 不接受隐式转换，且带有默认参数
    explicit Person(const std::string &name, int age = 0) {
        this->name = name;
        this->age = age;
    }

    // 成员函数
    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }

private:
    std::string name;
    int age;
};

int main() {
    /* 不同调用非默认构造函数的方法 */
    Person p1 = Person("Momo", 20);      // 显式的调用复制构造函数
    Person p2("Demon", 2100000);         // 隐式的调用构造函数
    auto *p3 = new Person("Link", 124);  // new 和构造函数一起使用

    /* 不同调用默认构造函数的方法 */
    Person p4;                  // 隐式默认构造函数
    Person p5 = Person();       // 显式复制构造函数
    auto *p6 = new Person;      // 和 new 一起

    delete p3;
    delete p6;
    return 0;
}