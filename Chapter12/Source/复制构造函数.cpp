//
// Created by Momo on 2023/7/23.
//

#include "../Header/复制构造函数.h"

void use_of_copy_constructor_func() {
    MyClass obj1(10);
    /* 不同使用复制构造函数的方法 */
    MyClass obj2(obj1);

    // 第二个和第三个都是隐式调用
    MyClass obj3 = obj1;
    MyClass obj4 = MyClass(obj1);
    // ---------------------

    MyClass *obj5 = new MyClass(obj1);
}

// 隐式复制构造函数造成的浅拷贝的问题
// 隐式拷贝生成的两个类的值都是“按值”拷贝的
// 所以两个虽然是两个指针，但是是同一个地址，两个类的析构释放的是同样一个地址，所以爆炸
void problem_of_shallow_cp() {
    shallow_cp demo1(20);
    shallow_cp demo2 = shallow_cp(demo1);
}

// 类的深拷贝
void deep_cp() {
    shallow_cp_solve demo1(10);
    shallow_cp_solve demo2 = shallow_cp_solve(demo1);
}

int main() {
    // problem_of_shallow_cp();
    deep_cp();
    return 0;
}