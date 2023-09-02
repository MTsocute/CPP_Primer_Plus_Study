//
// Created by Momo on 2023/8/30.
//
#include <iostream>
#include <utility>

using namespace std;

class Person {
private:
    std::string name;
public:
    // 委托构造函数 --> 利用 Person(std::string n) 初始化了函数
    Person() : Person("Unknown") {}

    // 构造函数
    explicit Person(std::string n) : name(std::move(n)) {}

    void display() const;
};

void Person::display() const {
    std::cout << "Name: " << name << std::endl;
}

class Notes {
    int k;
    double x;
    string st;
public:
    Notes();

    Notes(int);

    Notes(int, double);

    Notes(int, double, string);
};

// 最后一个构造函数
Notes::Notes(int age, double account, std::string name) {
    k = age;
    x = account;
    name = std::move(name);     // 注意这里哈，这里是让右值引用引用左值
}

// 委托给 Notes(int, double, string) 减少重复写的地方
Notes::Notes() : Notes(250, 114.514, "Monster1") {}

Notes::Notes(int Age) : Notes(Age, 114.514, "Monster2") {}

Notes::Notes(int Age, double Account) : Notes(Age, Account, "Monster3") {}

int main() {
    return 0;
}