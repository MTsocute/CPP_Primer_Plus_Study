//
// Created by Momo on 2023/8/16.
//
#include <iostream>
#include <vector>
#include <list>

using namespace std;

void use_reverse_it() {
    vector<int> arr{1, 2, 3, 4};

    // os 迭代器 结合 copy() 把容器内容输出到屏幕
    ostream_iterator<int, char> output(cout, " ");
    copy(arr.rbegin(), arr.rend(), output);     // 反向迭代器

    cout << endl;
}

// 尾插迭代器的使用
void back_insert_it_in_use() {
    vector<int> demo = {1, 2, 3};

    // 创建尾插迭代器
    back_insert_iterator<vector<int>> bi(demo);

    vector<int> numbers = {4, 5, 6};

    /* back_insert_it 的简单使用 */
    // 使用 copy 算法将元素插入容器
    copy(begin(numbers), end(numbers), bi);

    // 添加一些元素
    *bi = 42;  // 等价于 numbers.push_back(42);
}

// 插入用的迭代器
void insert_it_in_use() {
    list<int> l1 = {1, 2, 3, 4, 5};
    // 创建一个在指定位置插入的迭代器
    insert_iterator<list<int>> it(l1, l1.begin());  // 在开头位置插入新节点
    *it = 0;
    ++it = 10;  // 移动到第二个位置插入新的数据

    for (auto num: l1)
        cout << num << " ";
    cout << endl;
}

int main() {
    insert_it_in_use();

    return 0;
}