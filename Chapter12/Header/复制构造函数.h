//
// Created by Momo on 2023/7/23.
//

#ifndef C___复制构造函数_H
#define C___复制构造函数_H

#include <iostream>

using namespace std;

class MyClass {
public:
    int value;

    // 构造函数
    MyClass(int val) : value(val) {}

    // 复制构造函数
    MyClass(const MyClass &other) : value(other.value) {}
};

// 浅拷贝造成的重复释放问题演示
class shallow_cp {
public:
    shallow_cp(int val) {
        this->data = new int;
        *data = val;
    }

    ~shallow_cp() {
        delete this->data;
    }

private:
    int *data;
};

// 浅拷贝的问题的解决 -- 深拷贝
class shallow_cp_solve {
public:
    shallow_cp_solve(int val) {
        this->data = new int;
        *data = val;
    }

    // 拷贝构造函数
    shallow_cp_solve(const shallow_cp_solve &other) {
        this->data = new int{*(other.data)};
        // *data = *(other.data);
    }

    ~shallow_cp_solve() {
        delete this->data;
    }

private:
    int *data;
};

void use_of_copy_constructor_func();

void problem_of_shallow_cp();

void deep_cp();

#endif //C___复制构造函数_H
