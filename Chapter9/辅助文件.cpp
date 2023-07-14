//
// Created by Momo on 2023/7/12.
// 这个文件是和 外部链接需要注意的问题.cpp 这个文件一起的


int demo1;

int demo2;

const int demo3 = 3;    // 等同于 static 不可以外部链接的

// 让 const 可以外部链接
extern const int DEMO4 = 40;    // 外部常量(可链接)