//
// Created by Momo on 2023/7/28.
//

#ifndef C___多态公有继承_H
#define C___多态公有继承_H

#include <iostream>
#include <string>

using namespace std;

// 支票账户信息
class Brass {
private:
    std::string fullName;
    long acctNum;
    double balance;
public:
    Brass(const std::string &s = "Nullbody", long an = -1,
          double bal = 0.0);

    void Deposit(double amt);

    double Balance() const;

    /* 虚方法 */
    virtual void Withdraw(double amt);

    virtual void ViewAcct() const;

    virtual ~Brass() {}
};

// 除了基本信息之外更高级的信息
class BrassPlus : public Brass {
private:
    double maxLoan;
    double rate;
    double owesBank;
public:
    BrassPlus(const std::string &s = "Nullbody", long an = -1,
              double bal = 0.0, double ml = 500,
              double r = 0.11125);

    BrassPlus(const Brass &ba, double ml = 500,
              double r = 0.11125);

    virtual void ViewAcct() const override;

    virtual void Withdraw(double amt) override;

    void ResetMax(double m) { maxLoan = m; }

    void ResetRate(double r) { rate = r; };

    void ResetOwes() { owesBank = 0; }
};


void func_of_virtual();

#endif //C___多态公有继承_H
