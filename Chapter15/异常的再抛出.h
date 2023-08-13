//
// Created by Momo on 2023/8/11.
//

#ifndef C___异常的再抛出_H
#define C___异常的再抛出_H

#include <iostream>
#include <string>

using namespace std;

double Devide(double x, double y);

int CountTax(int salary);


// 自定义报错类对象
class CException {
public:
    string msg;

    CException(string s) : msg(s) {}
};


double Devide(double x, double y) {
    if (y == 0)
        // 抛出自定义类型错误
        throw CException("devided by zero");
    cout << "in Devide" << endl;
    return x / y;
}


// 函数内部 catch () 错误，导致上一层函数捕捉不到错误的情况
int CountTax(int salary) {
    try {
        if (salary < 0)
            throw -1;
        else if(salary == 0)
            throw string("Are you seriously, pay for no money?\n");
        else
            cout << "counting tax" << endl;
    }
    // 报错内部消化了，就不会传递上层函数
    catch (int err) {
        cout << "salary < 0" << endl;
    }
    catch (string & s) {
        cout << "Inside Error: \n" << s << endl;
        // 再抛错，让上一层函数可以接受到错误
        throw;
    }
    cout << "tax counted" << endl;
    return salary * 0.15;
}

#endif //C___异常的再抛出_H
