//
// Created by Momo on 2023/7/14.
//
#include <iostream>
#include <new>

using namespace std;

// 我们可以直接给 new 初始化的数据赋值
void new_ini()  // C++ 11
{
    int *p1 = new int(10);
    int *p2 = new int[2]{1, 2};

    delete p1;
    delete[]p2;
}


// new 定位的用法
// new (pointer) Type
void new_location() {
    int *mem = new int;    // 分配一个内存
    // 结合上面那个直接赋值的语法，我们先定位到那个位置 -> new (location)
    // 然后给这个位置赋予某某数据 -> type(data)
    int *obj = new(mem) int(42);

    // 你会发现两个指针存储的是同一个地址的
    cout << "address of mem: " << mem <<
         "\naddress of obj: " << obj << endl;

    delete obj;
}

// new 出来的大小是字节，我们就是装其他数据也不会影响，只要装的下
void different_data() {
    char datas[512];    // --> 512 byte

    // 定位的是一个静态内存哦
    // 而且我们创建的数据类型和使用的数据类型不一样也是可用的
    int *p = new(datas) int[8]
            {1, 2, 3, 4, 5, 6, 7, 8};   // --> 32 byte

    for (int i = 0; i < 8; ++i) {
        cout << p[i] << " ";
    }
    cout << endl;

    // 当然由于定位用的是指针，我们是可以计算字节来偏移的
    int *p2 = new(datas + 8 * sizeof(int)) int[4]
            {9, 10, 11, 12};    // --> 16 byte

    for (int i = 0; i < 4; ++i) {
        cout << p2[i] << " ";
    }
    cout << endl;

    // 注意这个 p 指向的是一个数组的静态内存，我们是定位不是开辟新空间，不可以 delete
    // delete []p;  // Wrong：删除静态内存
}


int main() {
//    new_location();
    different_data();
    return 0;
}
