//
// Created by Momo on 2023/7/19.
//

#ifndef C___类的自动转换和强制转换_H
#define C___类的自动转换和强制转换_H

#include <iostream>

using std::cout;

class Stonewt {
private:
    enum { Lbs_per_stn = 14 };    // pounds per stone
    int stone;                    // whole stones
    double pds_left;              // fractional pounds
    double pounds;                // entire weight in pounds
public:
    Stonewt(double lbs);          // construct from double pounds
    Stonewt(int stn, double lbs); // construct from stone, lbs
    Stonewt();                    // default constructor

    void show_lbs() const;        // show weight in pounds format
    void show_stn() const;        // show weight in stone format

    operator int() const;
    operator double() const;
};

class momoDemo {
private:
    std::string name;

public:
    momoDemo() { this->name = "Anonymous"; }

    // explicit 关闭构造函数的隐式转换
    explicit momoDemo(std::string Name) :name(Name) {}

    // 用户自定义的类型转换函数 momoDemo() --> string
    operator std::string() const;

};

momoDemo::operator std::string() const {
    return this->name;
}

#endif //C___类的自动转换和强制转换_H
