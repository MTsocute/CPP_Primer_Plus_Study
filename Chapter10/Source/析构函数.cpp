//
// Created by Momo on 2023/7/16.
//
#include <iostream>
#include <string>

class Person {
public:
    // 默认构造函数：带默认参数
    Person() {
        name = "Unknown";
        age = 0;
    }

    // 构造函数
    Person(const std::string &name, int age) {
        this->name = name;
        this->age = age;
    }

    // 析构函数的创建
    ~Person();

    // const 成员函数
    void display() const {
        std::cout << "Name: " << name
        << ", Age: " << age << std::endl;
    }

    const Person &compare_age(const Person &s) const;

private:
    std::string name;
    int age;
};

Person::~Person() {
    std::cout << "This is the end\n";
}

/* const Person & 里的 const 是为防止读取值的时候被修改
 * const Person & 引用的实例，相当于 const 创建的常量了
 * 我们如果要操作数据，必须得用 const 成员函数，所以结尾得是 const
 * 函数开头的 const 是为了对应 const Person & s，才能返回对应的值
 * */
const Person &Person::compare_age(const Person &s) const {
    if (this->age > s.age)
        return *this;
    return s;
}

int main() {
    auto *p = new Person();
    // const 创建的类实例，成员变量不可修改（不论在 public 还是 private）
    // 且成员函数要使用 const 防止修改成员变量
    const Person p1 = Person();
    p1.display();

    delete p;
    return 0;
}