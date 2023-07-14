//
// Created by Momo on 2023/7/14.
//
#include <iostream>

using namespace std;

// 可以函数声明和实现分开来，但是因为在同一片文件空间，所有要有同名
namespace life {
    void jack();
}

namespace life {
    void jack() { cout << "I am jack;\n"; }
}

namespace demo {
    int data = 30;
}

namespace demo2 {
    int data = 30;
}

double data = 20.123;

// using 引入的话，假如同名，新创建的变量会覆盖原来就有的
using namespace demo2;

// namespace 嵌套
namespace Jack {
    namespace Rose {
        int fire;
    }
    float water;
    using demo2::data;  // 这个即位于 Jack 也存在于 demo2
}

// 可以为 namespace 创建别名
namespace demo1 = demo;

// 利用创建别名，简化嵌套的复杂度
namespace woman = Jack::Rose;   // --> 直接就访问到了 Rose

// 匿名 namespace == static 变量
namespace {
    int a = 20;     // 可以用 a 直接访问，--> static int a = 20;
    int b = 30;     // static int b = 30;
}


int main() {
    // using 声明一般会造成二义性，但是 namespace 空间不会
//    using demo::data;

//    int data = 100;   // 这个会和上面 using 的 data 冲突

    int data = 40;  // using namespace 的不会冲突，新创建的会覆盖原有的

    cout << data << endl;

//    cout << demo1::data << endl;

//    cout << ::data << endl;

    return 0;
}