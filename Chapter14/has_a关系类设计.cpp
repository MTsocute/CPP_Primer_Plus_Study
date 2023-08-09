//
// Created by Momo on 2023/8/3.
//

#include "has_a关系类设计.h"

using std::ostream;
using std::istream;
using std::string;
using std::endl;

//public methods
double Student::Average() const {
    if (scores.size() > 0)
        return scores.sum() / (double) scores.size();
    else
        return 0;
}

const string &Student::Name() const {
    return name;
}

double &Student::operator[](int i) {
    return scores[i];         // use valarray<double>::operator[]()
}

double Student::operator[](int i) const {
    return scores[i];
}

// private method
ostream &Student::arr_out(ostream &os) const {
    int i;
    int lim = (int) scores.size();
    if (lim > 0) {
        for (i = 0; i < lim; i++) {
            os << scores[i] << " ";
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

// use string version of operator>>()
istream &operator>>(istream &is, Student &stu) {
    is >> stu.name;
    return is;
}

// use string friend getline(ostream &, const string &)
istream &getline(istream &is, Student &stu) {
    getline(is, stu.name);
    std::cin.ignore(100, '\n');
    return is;
}

// use string version of operator<<()
ostream &operator<<(ostream &os, const Student &stu) {
    os << "Scores for " << stu.name << ":\n";
    stu.arr_out(os);  // use private method for scores
    return os;
}