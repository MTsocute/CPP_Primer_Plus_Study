//
// Created by Momo on 2023/8/3.
//

#include "私有继承实现has-a关系.h"

using std::ostream;
using std::endl;
using std::istream;
using std::string;

// public methods
double Student::Average() const {
    // 如果向使用私有继承类的成员函数，要使用其作用解析域符号
    if (ArrayDb::size() > 0)
        return ArrayDb::sum() / (double) ArrayDb::size();
    else return 0;
}

// 使用私有继承打破了成员变量是类的模式，如果我们需要这个类本身，返回的方式就要不同考虑
const string &Student::Name() const {
    // 私有继承：访问基类对象, 函数返回对应类型的引用
    // 这里主要目的是为了那个 const
    return (const string &) *this;
}

double &Student::operator[](int i) {
    return ArrayDb::operator[](i);         // use ArrayDb::operator[]()
}

double Student::operator[](int i) const {
    return ArrayDb::operator[](i);
}

// private method
ostream &Student::arr_out(ostream &os) const {
    int i;
    int lim = ArrayDb::size();
    if (lim > 0) {
        for (i = 0; i < lim; i++) {
            os << ArrayDb::operator[](i) << " ";
            if (i % 5 == 4)
                os << endl;
        }
        if (i % 5 != 0)
            os << endl;
    } else
        os << " empty array ";
    return os;
}

// friends
// use String version of operator>>()
istream &operator>>(istream &is, Student &stu) {
    is >> (string &) stu;
    return is;
}

// use string friend getline(ostream &, const string &)
istream &getline(istream &is, Student &stu) {
    getline(is, (string &) stu);
    return is;
}

// 访问基类的友元函数
ostream &operator<<(ostream &os, const Student &stu) {
    // 我们可以通过类型转换，把基类对象交给基类的运算符函数处理
    os << "Scores for " << (const string &) stu << ":\n";
    stu.arr_out(os);  // use private method for scores
    return os;
}