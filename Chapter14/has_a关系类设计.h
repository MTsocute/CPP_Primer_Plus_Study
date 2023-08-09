//
// Created by Momo on 2023/8/3.
//

#ifndef C___HAS_A关系类设计_H
#define C___HAS_A关系类设计_H

#include <iostream>
#include <string>
#include <valarray>

class Student {
private:
    typedef std::valarray<double> ArrayDb;
    // 这个就是 has-a 关系，在一个类中包含其他的类对象
    std::string name;       // contained object
    ArrayDb scores;         // contained object

    // 私有成员函数
    std::ostream &arr_out(std::ostream &os) const;

public:
    Student() : name("Null Student"), scores() {}

    // 特别小心这种，只有一个参数的，如果使用 = 对应的值，可能就会调用隐式转换
    // 相当于把对象新构造了一遍
    explicit Student(const std::string &s)
            : name(s), scores() {}

    explicit Student(int n) : name("Nully"), scores(n) {}

    Student(const std::string &s, int n)
            : name(s), scores(n) {}

    Student(const std::string &s, const ArrayDb &a)
            : name(s), scores(a) {}

    Student(const char *str, const double *pd, int n)
            : name(str), scores(pd, n) {}

    ~Student() {}

    double Average() const;

    const std::string &Name() const;

    double &operator[](int i);

    double operator[](int i) const;

    // friends
    // input
    friend std::istream &operator>>(std::istream &is,
                                    Student &stu);  // 1 word
    friend std::istream &getline(std::istream &is,
                                 Student &stu);     // 1 line
    // output
    friend std::ostream &operator<<(std::ostream &os,
                                    const Student &stu);
};

#endif //C___HAS_A关系类设计_H
