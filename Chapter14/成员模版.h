//
// Created by Momo on 2023/8/6.
//

#ifndef C___成员模版_H
#define C___成员模版_H

#include <iostream>

using std::cout;
using std::endl;

template<typename T>
class beta {
private:
    // 模版类作为类的成员变量
    template<typename V>  // nested template class member
    class hold {
    private:
        V val;
    public:
        hold(V v = 0) : val(v) {}
        void show() const { cout << val << endl; }
        V Value() const { return val; }
    };

    // 模版成员在类内创建实例
    hold<T> q;             // 和 beta 一个类型
    hold<int> n;           // 指定为 int
public:
    beta(T t, int i) : q(t), n(i) {}

    // 在类内内部的模版成员函数
    template<typename U> // 参数的类型一个由类决定，另一个由输入数的值决定
    U blab(U u, T t) { return (n.Value() + q.Value()) * u / t; }

    void Show() const {
        q.show();
        n.show();
    }

    template<class W> W hold_the_line(W c, T t);

    template<class F>
    void show_other(const hold<F> & other) {
        other.show();
    }

};

// 成员模版的模版函
// 数类外实现
template<class T>
    template<class W>
W beta<T>::hold_the_line(W c, T t) {
    return c + t;
}


// 实现模版类中的模版函数具体化
template<>
    template<>
int beta<double>::blab(int u, double t) {
    cout << "使用了具体化\n";
    return (n.Value() + q.Value()) * u / t;
}


#endif //C___成员模版_H
