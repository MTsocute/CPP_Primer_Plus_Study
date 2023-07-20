//
// Created by Momo on 2023/7/19.
//

#include "类的自动转换和强制转换.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs) {
    stone = int(lbs) / Lbs_per_stn;    // integer division
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs) {
    stone = stn;
    pds_left = lbs;     // 带有小数的磅
    pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt()          // default constructor, wt = 0
{
    stone = pounds = pds_left = 0;
}

// show weight in stones
void Stonewt::show_stn() const {
    cout << stone << " stone, " << pds_left << " pounds\n";
}

// show weight in pounds
void Stonewt::show_lbs() const {
    cout << pounds << " pounds\n";
}

// conversion functions
Stonewt::operator int() const {
    return int(pounds + 0.5);
}

Stonewt::operator double() const {
    return pounds;
}


int main() {
    Stonewt demo;
    // 使用构造函数转换 double 成 Stonewt 类型
    // 只有接受一个参数的构造函数才可以转换, 除非另一个参数有默认参数
    demo = 20.0f;   // --> Stonewt demo(20.0f);
    Stonewt demo3 = 100.234;    // 隐式转换的不同方法

    momoDemo demo2;
    // demo2 = "nihao";     // --> 不再可以使用构造函数转换了


    /* 使用用户自定义的类型转换函数 */
    // 从 momoDemo类 转换成 string
    std::string demo4 = (std:: string)momoDemo("Cool~~");

    return 0;
}