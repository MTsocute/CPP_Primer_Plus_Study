//
// Created by Momo on 2023/8/7.
//

#ifndef C___非限制模版友元函数_H
#define C___非限制模版友元函数_H

/* 在这里实现模版非限制友元函数 */
template<typename T>
class HasFriendT {
private:
    T item;
public:
    HasFriendT(const T &i) : item(i) {}

    // 内联实现的成员函数
    void display() const { std::cout << "Item: " << item << std::endl; }

    // 非限制模板友元函数
    template<typename U, typename W>
    friend void report(HasFriendT<U> &obj1, HasFriendT<W> &obj2);
};

// 最大的特点就是，我们参数的类型不用和类模板的同步
template<typename U, typename W>
void report(HasFriendT<U> &obj1, HasFriendT<W> &obj2) {
    cout << "obj1 's item = " << obj1.item
         << "\nobj2 's item = " << obj2.item << endl;
}

// 非限制模板函数是可以实现具体化的
template<>
void report(HasFriendT<int> &obj1, HasFriendT<double> &obj2) {
    cout << "这里是的非限制的具体化\n";
    cout << "obj1 's item = " << obj1.item
         << "\nobj2 's item = " << obj2.item << endl;
}

#endif //C___非限制模版友元函数_H
