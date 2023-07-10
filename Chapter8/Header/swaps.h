//
// Created by Momo on 2023/7/4.
//

#ifndef C___SWAPS_H
#define C___SWAPS_H
#include <iostream>

using namespace std;
void swapr(int & a, int & b);   // a, b are aliases for ints
void swapp(int * p, int * q);   // p, q are addresses of ints
void swapv(int a, int b);       // a, b are new variables

void main_port();

#endif //C___SWAPS_H
