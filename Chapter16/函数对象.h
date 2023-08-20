//
// Created by Momo on 2023/8/17.
//


#ifndef C___函数对象_H
#define C___函数对象_H


#include <iostream>
#include <algorithm>
#include <functional>

// 定义一个函数对象类
// 将通俗一点的就是 类对象的成员方法 当函数来用
class MyFunctionObject {
public:
    // 重载 () 方法的类就是函数对象
    int operator()(int a, int b) {
        return a + b;
    }
};

// 我们可以利用函数对象实现动态的判断标准
template<class T>
class tooBig {
private:
    T value;
public:
    explicit tooBig(T val) : value(val) {}

    bool judge(const T compare) { return compare > value; }
};

// transform() 结合 函数符使用
void func_in_use() {
    std::vector<int> nums1 = {1, 2, 3, 4, 5};
    std::vector<int> nums2 = {10, 20, 30, 40, 50};
    std::vector<int> result(nums1.size()); // 创建用于存储结果的容器，大小与 nums1 相同

    std::transform(nums1.begin(), nums1.end(),
                   nums2.begin(), result.begin(), std::plus<int>());

    // 打印结果容器中的内容
    for (int num: result)
        std::cout << num << " ";
}


#endif //C___函数对象_H
