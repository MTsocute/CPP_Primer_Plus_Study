//
// Created by Momo on 2023/7/12.
//

#ifndef C___LINK_C_H
#define C___LINK_C_H

// 声明其他语言，并链接到CPP文件中使用
#ifdef __cplusplus
extern "C" {
#endif

void greet();   // 声明了一个 C 语言的函数声明，并在 C 文件中实现

#ifdef __cplusplus
}
#endif

#endif //C___LINK_C_H