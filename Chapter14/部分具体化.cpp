//
// Created by Momo on 2023/8/6.
//
#include <iostream>

// 类模板的通用版本
template <typename T1, typename T2>
class MyTemplateClass {
private:
    T1 data1;
    T2 data2;

public:
    MyTemplateClass(T1 value1, T2 value2) : data1(value1), data2(value2) {}

    void printData() {
        std::cout << "Data1: " << data1 <<
            ", Data2: " << data2 << std::endl;
    }
};

// 类模板的部分特化版本，固定T2为int类型
template <typename T1>
class MyTemplateClass<T1, int> {
private:
    T1 data1;
    int data2;

public:
    MyTemplateClass(T1 value1, int value2) : data1(value1), data2(value2) {}

    void printData() {
        std::cout << "Data1: " << data1
            << ", Specialized Data2: " << data2 << std::endl;
    }
};

// 如果 <> 里面为空，那么就会导致显式具体化
template <>
class MyTemplateClass<int, int> {
private:
    int a;
    int b;

public:
    void show() {
        std::cout << "a= " << a <<
            " b = " << b << std::endl;
    }
};

// 具体化还会区分一般类型和指针类型为不同的具体化
// 可以理解为多态的一种了
template <typename T1> class MyTemplateClass<T1 *, int> {
};



int main() {
    // 创建通用版本的类模板实例
    MyTemplateClass<double, char> instance1(3.14, 'A');
    instance1.printData(); // Output: Data1: 3.14, Data2: A

    // 创建部分特化版本的类模板实例
    MyTemplateClass<std::string, int> instance2("Hello", 42);
    instance2.printData(); // Output: Data1: Hello, Specialized Data2: 42


    return 0;
}
