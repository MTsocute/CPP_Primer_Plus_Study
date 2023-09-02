//
// Created by Momo on 2023/8/30.
//

#ifndef C___PROHIBITED_FUNC_H
#define C___PROHIBITED_FUNC_H

#include <iostream>
#include <utility>
#include <iomanip>
#include <string>

using namespace std;

class demo {
private:
    int age{};
    string name;
public:
    demo() = default;   // 使用默认的默认构造函数
    explicit demo(int Age = 0, string Name = "") : age(Age), name(std::move(Name)) {}

    /* 使用了 delete 之后，我们就不可以使用拷贝构造函数了 */
    demo operator=(const demo &other) = delete;    // 禁止拷贝构造函数

    demo &operator=(demo &&other) noexcept {
        this->age = other.age;
        this->name = other.name;
        return *this;
    }

    void show_info() const {
        cout << "Data:\n ";
        cout << "The age is: " << setw(4) << this->age
             << "\nThe name is: " << setw(4) << this->name << endl;
    }
};

#endif //C___PROHIBITED_FUNC_H
