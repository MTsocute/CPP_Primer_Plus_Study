//
// Created by Momo on 2023/7/16.
//

#ifndef C___类演示_H
#define C___类演示_H

#include <iostream>

#include <string>

class Stock {
/* 数据尽量都存在 private 里面，防止外部的直接修改 */
private:    // 私有部分的变量只可以通过公有部分的函数或友元函数来访问
    std::string company;
    long shares;
    double share_val;
    double total_val;

    // 类中声明实现的函数，就会被自动转换成内联函数
    // 内联函数要函数少点
    void set_tot() { total_val = (double) shares * share_val; }     /* 内联函数 */

/* 访问数据的公共接口 */
public:     // 类对象都是可以直接访问公有部分的
    void acquire(const std::string &co, long n, double pr);

    void buy(long num, double price);

    void sell(long num, double price);

    void update(double price);

    void show();
};


class Demo {
private:
    void say_sth();     // 类外实现内联函数
};

// 类外实现类内的内联函数
inline void Demo::say_sth() { std::cout << "Hello SB!\n"; }


#endif //C___类演示_H
