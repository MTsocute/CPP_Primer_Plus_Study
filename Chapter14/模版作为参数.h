//
// Created by Momo on 2023/8/7.
//

#ifndef C___模版作为参数_H
#define C___模版作为参数_H

#include <iostream>
#include <vector>


template<typename T>
class MyStack {
private:
    std::vector<T> elements;

public:
    MyStack() = default;

    bool push(T value);

    bool pop(T &value);

    void show_val() const;
};

template<typename T>
bool MyStack<T>::push(T value) {
    elements.push_back(value);
    return true;
}

template<typename T>
bool MyStack<T>::pop(T &value) {
    if (!elements.empty()) {
        value = elements.back();
        elements.pop_back();
        return true;
    }
    return false;
}

template<typename T>
void MyStack<T>::show_val() const {
    for (auto i: elements)
        std::cout << i << " ";
    std::cout << std::endl;
}


/** 另一个模版作为参数
 * 我们分解的来看这个就会简单很多了
 * 第一：template <typename T> class Thing 是一个模版类
 * 第二：第二层的相当于 template <typename Thing>
 * 使用跟这个方法，我们就可以利用把另一个模版类在类内用于创建类或函数引用
*/
template<template<typename T> class Thing>
class Crab {
private:
    Thing<int> s1;

public:
    Crab() = default;

    bool push(int a) {
        return s1.push(a);
    }

    bool pop(int &a) {
        return s1.pop(a);
    }

    void show_self() {
        this->s1.show_val();
    }

    template<class V>
    void show_other_val(const Thing<V> &other) const;
};

// 类外实现类模版参数类内成员函数
template<template<typename T> class Thing>
template<class V>
void Crab<Thing>::show_other_val(const Thing<V> &other) const {
    other.show_val();
}

// 现版本如果要类内使用类外模版类是明确的，我们就可以直接用，降低复杂度
class Crab2 {
private:
    MyStack<int> s1;    // 这里的类内模版类是固定的

public:
    Crab2() = default;

    bool push(int a) {
        return s1.push(a);
    }

    bool pop(int &a) {
        return s1.pop(a);
    }

    void show_self() {
        this->s1.show_val();
    }
};

#endif //C___模版作为参数_H
