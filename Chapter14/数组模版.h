//
// Created by Momo on 2023/8/6.
//

#ifndef C___数组模版_H
#define C___数组模版_H

#include <iostream>
#include <cstdlib>

// 这个方法叫做，参数表达式方法
template<class T, int n>    // 可以使用一个整数指定模版数组大小
class ArrayTP {
private:
    T ar[n];
public:
    ArrayTP() {};

    explicit ArrayTP(const T &v);

    virtual T &operator[](int i);

    virtual T operator[](int i) const;
};

template<class T, int n>
ArrayTP<T, n>::ArrayTP(const T &v) {
    for (int i = 0; i < n; i++)
        ar[i] = v;
}

template<class T, int n>
T &ArrayTP<T, n>::operator[](int i) {
    if (i < 0 || i >= n) {
        std::cerr << "Error in array limits: " << i
                  << " is out of range\n";
        std::exit(EXIT_FAILURE);
    }
    return ar[i];
}

// 用于不可以修改的常量数组
template<class T, int n>
T ArrayTP<T, n>::operator[](int i) const {
    if (i < 0 || i >= n) {
        std::cerr << "Error in array limits: " << i
                  << " is out of range\n";
        std::exit(EXIT_FAILURE);
    }
    return ar[i];
}

#endif //C___数组模版_H
