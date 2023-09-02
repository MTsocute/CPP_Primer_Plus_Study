//
// Created by Momo on 2023/9/1.
//

#ifndef C___包装器_H
#define C___包装器_H

#include <functional>
#include <iostream>
#include <cmath>
using namespace std;

void show_number(int num) {
    cout << "The num is: " << num << endl;
}

class Demo {
public:
    Demo() = default;
    inline void saySth(int num) { cout << "The num is: " << num << endl; }
};

class Demo2 {
public:
    void operator()(int num) { cout << "The num is: " << num << endl; }
};

#endif //C___包装器_H