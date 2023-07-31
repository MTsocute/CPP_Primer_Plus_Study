//
// Created by Momo on 2023/7/27.
//

#ifndef C___一个简单的基类_H
#define C___一个简单的基类_H

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class TableTennisPlayer {
private:
    string firstname;
    string lastname;
    bool hasTable;
public:
    TableTennisPlayer(const string &fn = "none",
                      const string &ln = "none", bool ht = false);

    void Name() const;

    bool HasTable() const { return hasTable; };

    void ResetTable(bool v) { hasTable = v; };
};

// 简单的继承
class RatePlayer : public TableTennisPlayer {
private:
    unsigned int rating;    // 自己的属性
public:
    // 既是默认构造函数也是带参构造函数
    RatePlayer(unsigned int r = 0, const string &fn = "none",
               const string &ln = "none", bool ht = false);

    // 复制一个默认构造函数和再利用一个值创建函数
    RatePlayer(unsigned int r, const TableTennisPlayer &tp);

    unsigned int Rating() const { return rating; }

    void ResetRating(unsigned int r) { rating = r; }
};

void Show(TableTennisPlayer & rf);

void relationShipBTBaseAndDerived();

void diffWay2UseConstructor();

#endif //C___一个简单的基类_H
