//
// Created by Momo on 2023/7/27.
//

#include "一个简单的基类.h"


TableTennisPlayer::TableTennisPlayer(
        const string &fn, const string &ln, bool ht) {
    firstname = fn;
    lastname = ln;
    hasTable = ht;
}


void TableTennisPlayer::Name() const {
    std::cout << lastname << ", " << firstname;
}


/* 继承的构造函数代码外部实现 */
// 这种使用: 初始化的方法叫做成员列表初始化

// 1. 默认构造函数
RatePlayer::RatePlayer(unsigned int r, const std::string &fn,
                       const std::string &ln, bool ht) : TableTennisPlayer(fn, ln, ht) {
    rating = r;
}

// 2. 构造函数: 这里的给基类复制是通过复制构造函数的
RatePlayer::RatePlayer(unsigned int r,
                       const TableTennisPlayer &tp) : TableTennisPlayer(tp), rating(r) {}

/* 派生类不同的构造函数的调用方法 */
void diffWay2UseConstructor() {
    RatePlayer p1;  // 调用默认构造函数，使用默认参数来初始化对象

    // 调用第一个构造函数
    RatePlayer p2(100, "John", "Doe", true);

    // 调用第二个构造函数
    TableTennisPlayer player("Alice", "Smith", false);
    RatePlayer p3(80, player);
}


/* 基类可以引用指向派生类对象
    * 1、基类指针可以在不进行显式类型转换的情况下指向派生类对象
    * 2、基类引用可以在不进行显式类型转换的情况下引用派生类对象
 * */
void relationShipBTBaseAndDerived() {
    RatePlayer demo1(200, "Mo", "mo", true); // 派生类对象
    /* 使用基类引用或指向派生类对象 */
    TableTennisPlayer * p1 = &demo1;
    TableTennisPlayer & r1 = demo1;

    p1->Name();
    r1.Name();

    // 基类指针或引用，只能调用自己的基类方法，不可以调用派生类的方法，哪怕指向的是一个派生类的对象
    // p->Ratint();
    // 派生类的指针或引用不可以指向基类对象
//    TableTennisPlayer demo2;
//    RatePlayer & r2 = demo2;
}


void Show(TableTennisPlayer & rf) {
    using std::cout;
    cout << "Name: ";
    rf.Name();
    cout << "\nTable: ";

    if (rf.HasTable())
        cout << "Yes\n";
    else
        cout << "No\n";
}