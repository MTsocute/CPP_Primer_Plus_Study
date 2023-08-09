//
// Created by Momo on 2023/8/6.
//

#include <iostream>
#include <string>

// 模版类但是多个参数可以是模版
template<class T1, class T2>
class Pair {
private:
    T1 a;
    T2 b;
public:
    T1 &first();

    T2 &second();

    /* 用于处理那些常量类 */
    T1 first() const { return a; }

    T2 second() const { return b; }

    Pair(const T1 &aval, const T2 &bval) : a(aval), b(bval) {}

    Pair() {}
};

template<class T1, class T2>
T1 &Pair<T1, T2>::first() {
    return a;
}

template<class T1, class T2>
T2 &Pair<T1, T2>::second() {
    return b;
}

// 模版是可以设置默认参数的
template <typename T1, typename T2 = int>   // 如果创建对象的实例化的时候，不给 T2 类型参数，就会默认为 int
class PairButDefaultPara{
private:
    T1 a;
    T2 b;
public:
    explicit PairButDefaultPara(T1 A, T2 B = 0) : a(A), b(B) {}
    void show_value() {
        std::cout << "a = " << a
        << " b = " << b << std::endl;
    }
};


int main() {
    using std::cout;
    using std::endl;
    using std::string;

    Pair<string, int> ratings[4] = {
        Pair<string, int>("The Purpled Duck", 5),
        Pair<string, int>("Jaquie's Frisco Al Fresco", 4),
        Pair<string, int>("Cafe Souffle", 5),
        Pair<string, int>("Bertie's Eats", 3)
    };

    int joints = sizeof(ratings) / sizeof(Pair<string, int>);
    cout << "Rating:\t Eatery\n";

    for (int i = 0; i < joints; i++)
        cout << ratings[i].second() << ":\t "
             << ratings[i].first() << endl;

    cout << "Oops! Revised rating:\n";
    ratings[3].first() = "Bertie's Fab Eats";
    ratings[3].second() = 6;

    cout << ratings[3].second() << ":\t "
         << ratings[3].first() << endl;


    PairButDefaultPara<const char *> p1("momo");

    p1.show_value();

    return 0;
}