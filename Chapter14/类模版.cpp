//
// Created by Momo on 2023/8/6.
//
#include <iostream>

using namespace std;

// 类模版的创建
template <typename T>
class MyTemplateClass {
private:
    T data;

public:
    MyTemplateClass(T value) : data(value) {}

    // 注意类模版的成员函数实现不可以和模版类声明分文件
    T getData() const {
        return data;
    }

    // 类内部的函数实现不需要在写 template 关键字
    void setData(T value) {
        data = value;
    }

    void show_value();
};

// 显式实例化一个类
template class MyTemplateClass<double>;    // 没啥用，不介绍了

// 显式具体化一个类模板
// 可以看的出来，就是类型是 string 的类模板，新定义处理
template<>
class MyTemplateClass<string> {
private:
    string data;
public:
    MyTemplateClass(string Name) : data(Name) {}

    void show_sth() {
        cout << "This is only in string template class\n";
        cout << "data = " << data << endl;
    }
};


// 成员函数函数类外实现
template<typename T>
void MyTemplateClass<T>::show_value() {
    cout << "The data = " << this->data << endl;
}

// 对类模版成员函数的具体化实现
template<>
int MyTemplateClass<int>::getData() const {
    cout << "Specialization of template function\n";
    return this->data;
}


int main() {
    // 创建一个MyTemplateClass对象，其中T为int类型
    MyTemplateClass<int> intObject(42); // 隐式实例化一个类对象
    std::cout << "Integer value: "
              << intObject.getData() << std::endl;

    MyTemplateClass<string> demo("momo");
    demo.show_sth();

    return 0;
}
