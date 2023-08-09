//
// Created by Momo on 2023/8/3.
//

#ifndef C___私有继承实现HAS_A关系_H
#define C___私有继承实现HAS_A关系_H

#include <iostream>
#include <valarray>
#include <string>

// 多重继承
class Student : private std::string, private std::valarray<double> {
private:
    typedef std::valarray<double> ArrayDb;

    // private method for scores output
    std::ostream &arr_out(std::ostream &os) const;

public:
    Student() : std::string("Null Student"), ArrayDb() {}

    explicit Student(const std::string &s)
            : std::string(s), ArrayDb() {}

    explicit Student(int n) : std::string("Nully"), ArrayDb(n) {}

    Student(const std::string &s, int n)
            : std::string(s), ArrayDb(n) {}

    Student(const std::string &s, const ArrayDb &a)
            : std::string(s), ArrayDb(a) {}

    Student(const char *str, const double *pd, int n)
            : std::string(str), ArrayDb(pd, n) {}

    ~Student() {}

    double Average() const;

    double &operator[](int i);

    double operator[](int i) const;

    const std::string &Name() const;

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

#endif //C___私有继承实现HAS_A关系_H
