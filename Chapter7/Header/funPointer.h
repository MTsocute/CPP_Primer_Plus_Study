//
// Created by Momo on 2023/7/2.
//

#ifndef C___FUNPOINTER_H
#define C___FUNPOINTER_H

double betsy(int);

double pam(int);

// declare of a function pointer type
void (*demo)();

void showpower();

void demo_of_function_pointer();

// 使用函数指针，让函数的形参可以接收一个函数作为参数
void estimate(int lines, double(*pf)(int));


const double *f1(const double *arr, int mount);

const double *f2(const double *arr, int mount);

const double *f3(const double *arr, int mount);


void tips_of_auto_in_funcPointer();

void use_estiamte();


#endif //C___FUNPOINTER_H
