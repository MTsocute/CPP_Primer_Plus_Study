//
// Created by Momo on 2023/8/18.
//
#include <iostream>
#include <functional>

using namespace std;

template<typename T>
class my_add {
public:
    T operator()(T a, T b);
};

// 我们想要实现一个元函数版本的这个要这么做呢?
template<typename T>
T my_add<T>::operator()(T a, T b) { return a + b; }


// 想要实现一元函数版本的，我们就必须固定其中一个参数到函数对象当中去
template<typename T>
class my_add2 {
private:
    int a;
public:
    my_add2(int A) : a(A) {}

    T operator()(int b) { return this->a + b; }
};

// 我们可以利用自适应生成器更简单的实现上述的功能
void bind_demo() {
    my_add<int> add;
    // 和 my_add2 实现了同样的操作，返回的 my_add3 是函数符
    // placeholder::_x 决定控制第x个参数固定为 10
    auto add3 = std::bind(add, 10, placeholders::_1);
    cout << "ret3 = " << add3(2) << endl;
}


int main() {

    my_add<int> add1;

    int ret = add1(10, 2);

    cout << "ret1 = " << ret << endl;

    my_add2<int> add2(10);

    cout << "ret2 = " << add2(2) << endl;

    bind_demo();

    return 0;
}