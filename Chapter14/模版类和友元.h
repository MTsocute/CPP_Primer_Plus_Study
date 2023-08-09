//
// Created by Momo on 2023/8/7.
//

#ifndef C___模版类和友元_H
#define C___模版类和友元_H

#include <iostream>

using namespace std;

template<typename T>
class HasFriend {
private:
    T item;
    static int ct;
public:
    HasFriend(const T &i) : item(i) { ct++; }

    ~HasFriend() { ct--; }

    friend void counts();   // 非模板友元

    friend void reports(HasFriend<T> &); // 非模板友元带模板参数
};

// each specialization has its own static data member
template<typename T>
int HasFriend<T>::ct = 0;


/* 友元函数的外部实现 */

// non-template friend to all HasFriend<T> classes
void counts() {
    cout << "int count: " << HasFriend<int>::ct << "; ";
    cout << "double count: " << HasFriend<double>::ct << endl;
}

// non-template friend to the HasFriend<int> class
void reports(HasFriend<int> &hf) {
    cout << "HasFriend<int>: " << hf.item << endl;
}

// non-template friend to the HasFriend<double> class
void reports(HasFriend<double> &hf) {
    cout << "HasFriend<double>: " << hf.item << endl;
}


#endif //C___模版类和友元_H
