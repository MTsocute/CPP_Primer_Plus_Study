#include <iostream>
using namespace std;

struct human {
    char name[16];
    bool gender;
    int age;
};

// 返回引用的函数和传统返回变量函数的差别
// 引用返回是字节返回变量本身，而传统返回是想让数存储到临时位置，拷贝过去
// 相比之下，引用返回的效率要高很多
human & demo(human & h1) {
    return h1;
}

// 返回引用的函数，不要返回局部变量
const human & copy(human & h1) {
    human newman;
    newman = h1;
    return newman;      // 局部变量会被释放掉的，然后返回出去的是欧就找不到了
}

int main() {
    return 0;
}