//
// Created by Momo on 2023/8/4.
//

#ifndef C___基类_H
#define C___基类_H

#include <iostream>

using namespace std;

class Base {
public:
    void publicMethod() {
        cout << "Base :: publicMethod()\n";
        privateMethod();
    }

protected: // 继承可以访问，但是类外不可以访问
    void protectedMethod() {
        cout << "Base :: protectedMethod()\n";
    }

private:  // 只有自己的公有部分才可以访问
    void privateMethod() {
        cout << "Base :: privateMethod()\n";
    }
};

#endif //C___基类_H
