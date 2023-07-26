//
// Created by Momo on 2023/7/24.
//

#include <iostream>
using namespace std;

class mydemo {
public:
    /* 构造函数 */
    mydemo() { this->data = nullptr; }
    mydemo(int val) { data = new int {val}; }
    mydemo(const mydemo & other) {
        cout << "使用了构造复制函数\n";
        data = new int {*(other.data)};
    }
    /* 析构函数 */
    ~mydemo() { delete this->data; }

    // 重构赋值运算符
    // 引用返回自己，使得可以多次使用 =
     mydemo & operator=(const mydemo &other) {
        cout << "使用了赋值运算符号\n";
         if (this == &other)    // 比较的是地址，处理自己和 = 之后的对象相同
             return *this;
        delete data;
        this->data = new int {*(other.data)};
         return *this;
    }

    /* 比较运算符的重构 */
    bool operator==(const mydemo & other) const {
        return *(this->data) == *(this->data);
    }
    bool operator<(const mydemo &other) const {
        return *(this->data) < *(this->data);
    }
    friend bool operator>(const mydemo & other,
                          const mydemo & self) { return self < other; }

    void showdata() { cout << *(this->data) << endl; }
private:
    int *data;
};


// 什么时候会使用赋值运算符
void basic_usage_of_op_equal() {
    mydemo demo1(10);
    mydemo demo2;
    // 给一个已有值的对象赋予一个有值对象，就会调用赋值运算符
    demo2 = demo1;  // 赋值：(Assignment)
    demo2.showdata();
}

// 初始化对象的时候不一定就是重载的运算符了
void cp_or_op() {
    mydemo demo1(20);
    // 使用复制构造函数
    mydemo demo2 = demo1;   // 初始化：(Initialization)
    demo2.showdata();
}

int main() {
    //basic_usage_of_op_equal();
    cp_or_op();
    return 0;
}