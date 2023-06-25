//
// Created by Momo on 2023/6/25.
//

// use new.cpp -- using the new operator
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

// 同理于下面的 new 操作
void old_c_malloc() {
    // 开辟一个 int 大小的空间
    int *pt = (int *) malloc(sizeof(int));
    *pt = 18843;

    cout << "int " << "value = " << *pt <<
         " : location = " << pt << endl;
}

// 避免两个指针指向同个 new 地址，否则容易重复删除
void repetitive_delete() {
    int *pt = new int;
    int *ps = pt;
    delete ps;      // 这个也是可以删除 new 出来的空间的
    // 但是 pt 也还指向 new
    // 如果我们 delete ps 就会重复删除空间了
}

// 利用 new 实现字符串拷贝
void stringCopyByNew() {
    const char *ptr = "Momo is super Cool~";

    char *ps = new char[strlen(ptr) + 1];     // 开辟动态数组，大小随着需求变化

    strcpy(ps, ptr);

    cout << "Content of ps:\n" << "  " <<
         ps << endl;

    delete []ps;
}


int main() {
    int nights = 1001;
    int *pt = new int;      // allocate space for an int
    *pt = 1001;             // store a value in new space

    // 变量值和存储位置
    cout << "nights value = " << nights <<
         " : location = " << &nights << endl;

    // new 开辟空间存储值和位置
    cout << "int " << "value = " << *pt <<
         " : location = " << pt << endl;

    delete pt;  // free the memory

    stringCopyByNew();
    return 0;
}