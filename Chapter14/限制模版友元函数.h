//
// Created by Momo on 2023/8/7.
//

#ifndef C___限制模版友元函数_H
#define C___限制模版友元函数_H

// 限制和非限制模版友元函数最大的区别在于
// 模版函数的参数是不是一定要和模版一个类型

template <class T>
class Mydemo {
private:
    T a;
public:
    explicit Mydemo(T data) : a(data) {}
    // 由于自己再类内没有 template 声明，但是又用了模版参数
    // 所以在类外要么决定类型，要么类外实现也用模板
    friend T add(const Mydemo<T> & demo1, const Mydemo<T> & demo2);
};

// 限制模板友元函数
template<class T>
T add(const Mydemo<T> &demo1, const Mydemo<T> &demo2) {
    return demo1.a + demo2.a;
}

// 没有具体化的，只有重载
// 友元函数类型都和类一样，如果类确定，每个类型都是确定的，何必需要模板呢
int add(const Mydemo<int> &demo1, const Mydemo<int> &demo2) {
    std::cout << "friend func with int specify\n";
    return demo1.a + demo2.a;
}

#endif //C___限制模版友元函数_H
