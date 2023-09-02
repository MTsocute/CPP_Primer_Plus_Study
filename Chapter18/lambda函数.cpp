//
// Created by Momo on 2023/8/31.
//

#include <iostream>

#include <functional>
#include <vector>

using namespace std;

void lambda_in_use1() {
    vector<int> v(10);
    for (int i = 0; i < 10; ++i)
        v.push_back(i);

    // lambda 函数就是没有函数名和返回值的一个函数：[](type para) { }
    // 我们一般使用 lambda 表达式来替换 STL 的谓词
    int count = count_if(v.begin(), v.end(),
                         [](int data) { return data % 2 == 0; });   // 使用 lambda 函数统计偶数数量的个数
}

void lambda_in_use2() {
    // 升序排序
    auto f = [](int a, int b) { return a < b; };
    vector<int> v2;

    v2.reserve(5);
    for (int i = 0; i < 5; ++i)
        v2.push_back(rand() % 100);

    sort(v2.begin(), v2.end(), f);

    for (auto num: v2)
        cout << num << " ";
    cout << endl;
}

// lambda 的范型编程
void lambda_in_template() {
    // 返回任意类型的两数只和
    auto add = [](auto a, auto b) -> decltype(a + b) { return a + b; };
}

// lambda 和外部变量的联系
void lambda_with_outside_var1() {
    int count = 0;
    vector<int> v;
    v.resize(5);
    for (int i = 0; i < 5; ++i)
        v.push_back(rand() % 10);
    auto get_num_bigger_than_3 = [&count](auto num) { if (num > 3) count++; };

    for_each(v.begin(), v.end(), get_num_bigger_than_3);

    cout << "num = " << count << endl;
}

// lambda 自动使用外部的变量
void lambda_with_outside_var() {
//    int x = 20;
//    // 使用 & 之后，lambda 里面所有的变量都会自动外部的相同变量名的变量
//    auto plus_10 = [&]() {
//        x += 10;
//        cout << "x in lambda = " << x << endl;
//    };
//    plus_10();
//    cout << "x in outside = " << x << endl;

    vector<int> v1;
    for (int i = 0; i < 10; ++i)
        v1.push_back(rand() % 10);

    // [=] 会默认按值引用变量
    int count = 0;
    auto get_num_is_even = [&](auto x) {
        return count += (x % 2 == 0);
    };
    for_each(v1.begin(), v1.end(), get_num_is_even);
    for (auto num: v1)
        cout << num << " ";
    cout << endl;
    cout << "Even num in v1 is: " << count << endl;
}

int main() {
//    lambda_in_use2();
    lambda_with_outside_var();
    return 0;
}