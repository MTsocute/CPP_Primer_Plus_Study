//
// Created by Momo on 2023/7/20.
//

#include <cstring>
#include <iostream>

class StringBad {
private:
    char *str;                // pointer to string
    int len;                   // length of string
    /* 所有的类对象都共享一个静态成员变量 */
    static int num_strings;    // number of objects
public:
    StringBad(const char *s); // constructor
    StringBad();               // default constructor
    ~StringBad();              // destructor

    // friend function
    friend std::ostream &operator<<(std::ostream &os,
                                    const StringBad &st);
    // 静态成员函数
};