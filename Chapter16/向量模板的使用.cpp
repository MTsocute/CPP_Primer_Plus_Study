//
// Created by Momo on 2023/8/15.
//

#include <iostream>
#include <vector>

using namespace std;

void v_insert() {
    vector<int> p1 = {1, 2, 3};
    vector<int> p2 = {4, 5, 6, 7, 8};

    /* vector 的插入方法 */
    p1.insert(p1.begin(), 0);

    // 获取 p1 结束位置的迭代器
    std::vector<int>::iterator p_end = p1.end();

    // 讲 p2 前三个数插入到 p1 的末尾
    p1.insert(p_end, p2.begin(), p2.begin() + 3);

    for (int num: p1)
        cout << num << " ";
    cout << endl;

    for (int num: p2)
        cout << num << " ";
    cout << endl;
}

void v_erase() {
    // erase() 擦出数据
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // 删除第三个元素（位置索引为2）
    std::vector<int>::iterator it = numbers.begin() + 2;
    numbers.erase(it);

    // erase() 擦出一个范围的数
    numbers.erase(numbers.begin() + 1, numbers.begin() + 3);

    // 打印 vector 中的元素
    for (int num: numbers)
        std::cout << num << " ";
}

/* 比较是后一个比前一个大为真，就是升序*/
bool customCompare(int a, int b) {
    if (a < b)
        return true;    // a < b 返回 true 说明 a 应该排在 b 前面
    return false;
}

void v_sort() {
    std::vector<int> numbers = {5, 2, 8, 1, 9};

    // 使用自定义比较函数进行排序
    std::sort(numbers.begin(), numbers.end(), customCompare);

    // 打印排序后的元素
    for (int num: numbers)
        std::cout << num << " ";
}

void this_is_a_part_of_me(int a) {
    cout << a << " ";
}

void for_each_by_for_range() {
    vector<int> a = {1, 2, 3, 4, 4, 5, 6, 7};

    // for_each 对容器指定范围的参数使用一个函数
    for_each(a.begin(), a.end(), this_is_a_part_of_me);

    // 使用 for 范围循环实现 for_each
    for (auto &num: a)
        this_is_a_part_of_me(num);
}

// STL算法可以用指针替代迭代器
void common_type_use_STL() {
    int arr[5]{1, 2, 3, 4, 5};
    vector<int> demo(5);
    copy(arr, arr + 5, demo.begin());

    for (auto num: demo)
        cout << num << " ";
    cout << endl;
}


int main() {
//    v_insert();
//    common_type_use_STL();

    return 0;
}