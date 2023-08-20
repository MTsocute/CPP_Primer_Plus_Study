//
// Created by Momo on 2023/8/14.
//
#include <iostream>
#include <string>
#include <memory>   // 使用智能指针要用的头文件

using namespace std;


class Report {
private:
    std::string str;
public:

    Report(const std::string s) : str(s) { std::cout << "Object created!\n"; }

    ~Report() { std::cout << "Object deleted!\n"; }

    void comment() const { std::cout << str << "\n"; }
};

// 智能指针应该要注意的问题
void issue_of_SP() {
    // 智能指针不要存地址，免得造成多次释放的问题
    // 真的要存东西，那就尽量使用 make_unique<type>()
    string haha("woshinidei");
    shared_ptr <string> ps(&haha);  // ps 的析构函数会 delete haha 对象使用析构，然后 haha自己本身结束也会析构，二次释放
    cout << "ps = " << *ps << endl;

    char str[20] = "hahaha\n";
    shared_ptr<char> demo(str);     // 存储的是一个静态地址，不需要释放不然出栈的时候二次释放

    /* 原则就是：需要分配内存的时候使用智能指针 */
}

// 智能指针的浅拷贝问题
void issue_shallow_cp() {
    unique_ptr<string> p1(new string("hello"));
    unique_ptr<string> p2;
    p2 = p1;    // 由于赋值运算符会让两个指针指向同一个内存 new string 这里会给释放两次
}
// 解决智能指针赋值运算后造成的重复释放内存问题
void solve_shallow_cp_by_move() {
    unique_ptr<string> p1(new string("hello"));
    unique_ptr<string> p2;
    p2 = std::move(p1);  // 使用 move() 方法资源转移

    // std::move() 转移资源之后，原定义会为空
    p1 = make_unique<string>("new demo");   // 使用 make_unique 重新分配资源
    cout << "p2 = " << *p2 << "\np1 = " << *p1 << endl;
}

int main() {
    // 智能指针如果离开了代码块就会自动释放
    {   // shared_ptr 智能指针的创建
        std::shared_ptr<Report> ps(new Report("using shared_ptr"));
        ps->comment();
    }

    std::cout << std::endl;

    {   // unique_ptr 智能指针的创建
        std::unique_ptr<Report> ps(new Report("using unique_ptr"));
        ps->comment();
    }
    return 0;
}