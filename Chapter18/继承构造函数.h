//
// Created by Momo on 2023/8/31.
//

#ifndef C___继承构造函数_H
#define C___继承构造函数_H
#include <iostream>
#include <utility>
using namespace std;

class basic {
private:
    int xb;
public:
    explicit basic(int x = 0) : xb(x) {}

    virtual void talk_about() const {
        cout << "Data: " << xb << endl;
    }

    // final 关键字，只允许派生类继承不允许重写
    virtual void show_show_way() const final {
        cout << "Fuck you asshole\n";
    }
};

/* 原先的继承的关系，有点麻烦，就是我们构造派生类的时候还得给基类初始化 */
class derived1 : public basic {
private:
    string name;
public:
    // 构造的时候，我们在给基类构造
    derived1(int xb = 0, string name = "none"): name(name), basic(xb) {}

    void talk_about() const override    // 重写虚函数的时候记得加 override
    {
        basic::talk_about();
        cout << "Data: " << this->name << endl;
    }
};

// 使用继承构造函数减少负担
class derived2 : public basic {
public:
    using basic::basic; // 继承使用基类的构造函数，我们写构造函数的时候就不用再写了
};

#endif //C___继承构造函数_H
