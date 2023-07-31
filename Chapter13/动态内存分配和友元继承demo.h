//
// Created by Momo on 2023/7/31.
//

#ifndef C___动态内存分配和友元继承DEMO_H
#define C___动态内存分配和友元继承DEMO_H

#include <iostream>

using std::cout;
using std::endl;


//  Base Class Using DMA
class baseDMA {
private:
    char *label;
    int rating;

public:
    baseDMA(const char *l = "null", int r = 0);

    baseDMA(const baseDMA &rs);

    virtual ~baseDMA();

    baseDMA &operator=(const baseDMA &rs);

    friend std::ostream &operator<<(std::ostream &os,
                                    const baseDMA &rs);
};

// derived class without DMA
// no destructor needed
// uses implicit copy constructor
// uses implicit assignment operator
class lacksDMA : public baseDMA {
private:
    enum {
        COL_LEN = 40
    };
    char color[COL_LEN];
public:
    lacksDMA(const char *c = "blank", const char *l = "null",
             int r = 0);

    lacksDMA(const char *c, const baseDMA &rs);

    friend std::ostream &operator<<(std::ostream &os,
                                    const lacksDMA &rs);
};

// derived class with DMA
class hasDMA : public baseDMA {
private:
    char *style;
public:
    hasDMA(const char *s = "none", const char *l = "null",
           int r = 0);

    hasDMA(const char *s, const baseDMA &rs);

    hasDMA(const hasDMA &hs);

    ~hasDMA();

    hasDMA &operator=(const hasDMA &rs);

    // 友元函数是外部实现的，我们如何实现继承基类的呢？
    friend std::ostream &operator<<(std::ostream &os,
                                    const hasDMA &rs);
};


std::ostream &operator<<(std::ostream &os, const hasDMA &hs) {
    os << (const baseDMA &) hs; // 向上转换成基类，使用它重载的友元函数
    os << "Style: " << hs.style << std::endl;
    return os;
}

#endif //C___动态内存分配和友元继承DEMO_H
