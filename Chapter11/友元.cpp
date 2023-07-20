//
// Created by Momo on 2023/7/19.
//

#include <fstream>
#include <ostream>
#include <iostream>

class myType {
private:
    int num;
public:
    myType() {
        this->num = 0;
    }

    explicit myType(int data) : num(data) {}

    // 在类内部实现的重载，左侧一定是类本身，所以没有办法处理这种情况
        // A = 2 * myType,
    // 但是 * 如果是非成员函数重载的话，实际上是可以两个参数重载的
        // myType operator*(int , const myType & );
    // 上面这种写法，myType 就可以在右边了，左边当然也是可以的，
    // 可是非成员函数如何操作类的数据呢？这个时候是友元起作用的时候了
    friend myType operator*(int data, const myType & t);    // 函数声明在类中

    void show() const{
        std::cout << "The data is " << this->num << std::endl;
    }
    // 重载 <<
//    friend void operator<<(std::ostream & os, const myType & t) {
//        os << "The data is " << t.num << std::endl;
//    }

    // 友元函数不能是 const 成员函数
    friend std::ostream & operator<<(std::ostream & os, const myType & t);

    myType operator*(int data) const;

    // 更简单的方法处理类不能在运算符右边的问题
    myType operator+(int data) const;

    // 相当于类内的 inline 函数
    friend myType operator+(int data, const myType& t) { return t + data; } // 交给右边处理了
};

// 成员函数运算符重载
myType myType::operator*(int data) const{
    myType tmp;
    tmp.num = this->num * data;
    return tmp;
}


myType myType::operator+(int data) const{
    myType tmp;
    tmp.num = this->num + data;
    return tmp;
}

// 外部实现友元
myType operator*(int data, const myType & t) {
    myType tmp;
    tmp.num = t.num * data;
    return tmp;
}

// 重载实现 多次使用 <<
// 重载了这个以后，甚至可以写到文件中去
std::ostream & operator<<(std::ostream & os, const myType & t) {
    os << "The data is " << t.num << std::endl;
    /* 原理：
        * 返回引用自己，相当于
        * --> (operator<<(os, t)) ==> os[返回自己] << (os, t)
     * */
    return os;
}


int main() {
    myType t1(10);
    myType t2 = 3 * t1;
    myType t3(20);
    myType t4 = 5 * t1 * 20;

//    std::cout << t2;    // --> void operator(std::cout, t2);
//    std::cout << t4;

    // 写入到文件中去
    std::ofstream outfile("/Users/momo/Desktop/CPP/Chapter11/data/savedata.txt");
    if(outfile.is_open()) {
        std::cout << "open!\n";
        // 相当于 --> ostream & operator<<(ostream & os, const myType & t)
        outfile << "This is a demo\n\t" << t4;  // 类的继承可以让 ostream 使用 ofstream 的对象
        std::cout << "Input completed!\n";
    }
    else
        std::cout << "open failed!\n";

    outfile.close();
    return 0;
}