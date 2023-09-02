//
// Created by Momo on 2023/8/30.
//

#include <iostream>

using namespace std;

/* 平时我们使用的引用是 “左值引用”
 * 但是引用的对象一般是一个变量，我们不可以引用一个常量，除非 const 限定
    * int a = 20;
    * int &ref = a;    👌
    * int &ref = 20;   🙅
    * const int &ref = 20;  👌
 * */

// 但是所以左右值的区别更像是数据存在的时间周期，那么，对于存在周期短的右值如何引用呢？
void right_val_ref() {
    int &&ref = 30;
    cout << "ref = " << ref << endl;
}

// 通过右值运算符产生的一个新的构造方法：移动赋值构造函数
class Useless {
private:
    int n;
    char *pc;      // pointer to data
    void ShowObject() const;

public:
    Useless();

    explicit Useless(int k);

    Useless(int k, char ch);

    Useless(const Useless &f); // regular copy constructor
    Useless(Useless &&f);      // move constructor
    ~Useless();

    Useless operator+(const Useless &f) const;

    void ShowData() const;
};


Useless::Useless() {
    pc = nullptr;
}

Useless::Useless(int k) : n(k) {
    pc = new char[n];
}

Useless::Useless(int k, char ch) : n(k) {
    pc = new char[n];
    for (int i = 0; i < n; i++)
        pc[i] = ch;
}

Useless::Useless(const Useless &f) : n(f.n) {
    pc = new char[n];
    for (int i = 0; i < n; i++)
        pc[i] = f.pc[i];
}


/* 移动构造函数具体实现 */
Useless::Useless(Useless &&f) : n(f.n) {
    // 移动构造函数涉及到拷贝的时候，注意指针问题
    pc = f.pc;       // 这里我们篡夺临时变量指针指针所在位置，会造成多个指针指向同个地址
    f.pc = nullptr;  // 为了解决多次释放的问题，我们把老的指针指向的地址，改成 null，释放 null 不会有事
    f.n = 0;
}

Useless Useless::operator+(const Useless &f) const {
    Useless temp = Useless(n + f.n);
    for (int i = 0; i < n; i++)
        temp.pc[i] = pc[i];
    for (int i = n; i < temp.n; i++)
        temp.pc[i] = f.pc[i - n];
    return temp;
}

Useless::~Useless() {
    delete[] pc;
}


// 如何让右值引用引用左值
void rRef_but_left_val() {
    int a = 30;

    // 方法一：使用 static_cast<type &&>
    int && ref1 = static_cast<int &&>(a);

    // 方法二：使用 std::move() 方法
    int && ref2 = std::move(a);

    cout << "ref1 = " << ref1 << "\nref2 = " << ref2 << endl;
}


int main() {
//    right_val_ref();
    rRef_but_left_val();
    return 0;
}