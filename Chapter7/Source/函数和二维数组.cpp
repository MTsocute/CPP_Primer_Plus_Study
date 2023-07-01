//
// Created by Momo on 2023/6/30.
//
#include <iostream>

using namespace std;

// 生成一个三行四列的二维数组
int arr[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};


/* 尽管形式不同，但是里面数组里面元素的个数要指定好 */

// 函数声明，有一个参数接受三行四列的数组
void print2DArray_array(int arr[][4], int dim1, int dim2);

// 函数声明，用一个多位数组指针接受三行四列的数组
void print2DArray_pointer(int (*arr)[4], int dim1, int dim2);


int main(int argc, const char * argv[]) {
    
    return 0;
}