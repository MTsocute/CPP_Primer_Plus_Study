//
// Created by Momo on 2023/7/17.
//

#ifndef C___运算符重载_H
#define C___运算符重载_H
#include <iostream>

class Time
{
private:
    int hours;
    int minutes;
public:
    // 构造函数
    Time();
    Time(int h, int m = 0);

    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    Time Sum(const Time & t) const;
    Time operator+(const Time & t) const;   // 重构实现 Sum() 的功能
    Time operator-(const Time & t) const;   // --> Time.operator-(t)
    Time operator*(int mult) const; // 返回一个新的 Time实例，存储这自己变动的数据

    void Show() const;
};

// 构造函数部分
Time::Time()
{
    hours = minutes = 0;
}

Time::Time(int h, int m )
{
    hours = h;
    minutes = m;
}


// 重构运算符函数
Time Time::operator+(const Time & t) const  // + 运算符的右边就是函数的传入的参数
{
    Time tmp;
    tmp.minutes = (this->minutes + t.minutes) % 60;
    tmp.hours = this->hours + t.hours +
            (this->minutes + t.minutes) / 60;
    return tmp;
}

Time Time::operator-(const Time &t) const {
    Time tmp;
    int tol_self = this->hours * 60 + this->minutes;
    int tol_other = t.hours * 60 + t.minutes;

    tmp.hours = (tol_self - tol_other) / 60;
    tmp.minutes = (tol_self - tol_other) % 60;

    return tmp;
}

Time Time::operator*(int mult) const {
    int totalMinutes =  this->hours* 60 + this->minutes;
    totalMinutes *= mult;

    int newHours = totalMinutes / 60;
    int newMinutes = totalMinutes % 60;

    return Time(newHours, newMinutes);
}

void Time::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

inline void Time::AddHr(int h)
{
    hours += h;
}

void Time::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}

/* 函数为什么不能 & 返回的原因
 * 我们创建了一个内部变量，存储计算数据
 * 但是因为其局部变量的性质，我们返回的时候实际上是复制出来的
 * 但是因为其局部变量的性质，函数结束的时候，释放的是引用的内部变量，所以不可以
 * */
Time Time::Sum(const Time & t) const
{
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

void Time::Show() const
{
    std::cout << hours << " hours, " << minutes << " minutes";
}



#endif //C___运算符重载_H
