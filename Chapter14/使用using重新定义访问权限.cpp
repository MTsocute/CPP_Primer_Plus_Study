//
// Created by Momo on 2023/8/4.
//
#include <iostream>

using namespace std;


class Base {
public:
    void publicMethod() {
        cout << "Base's public method" << endl;
    }

protected:
    void protectedMethod() {
        cout << "Base's protected method" << endl;
    }

private:
    void privateMethod() {
        cout << "Base's private method" << endl;
    }
};

/* 类在私有或保护继承的时候，会让基类的成员在外部不可以访问，
 * 我们可以使用 using 让其可以在外部被访问 */
class Derived : private Base {
public:
    // 公有方法，可在派生类外部直接访问
    using Base::publicMethod;

    // 保护方法，可在派生类外部直接访问
    using Base::protectedMethod;

    // 私有方法，无法在派生类外部直接访问
//    using Base::privateMethod;
};

int main() {
    Derived derived;
    derived.publicMethod();     // 可以直接访问
    derived.protectedMethod();  // 可以直接访问
    // derived.privateMethod();    // 无法直接访问，编译错误
    return 0;
}
