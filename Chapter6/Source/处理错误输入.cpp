//
// Created by Momo on 2023/6/29.
//

#include <iostream>
#define MAX 5
using namespace std;

int main() {
    int golf[MAX];

    cout << "Please enter your golf score\n";
    cout << "You must enter " << MAX << " rounds\n";

    for (int round = 0; round < MAX; ++round) {
        cout << "round #" << round + 1 << ": ";
        // 如果用户输出正确就是 True，所以我们这里是判断假如用户输入不正确
        while (!(cin >> golf[round])) {
            cin.clear();    // 重制输入，不会因为错误输入就断开，而是再一次输入
            // 处理掉 cache 里不好的输入
            // 譬如: 这个样子的输入 123life!!! \n，123 会被正常读取
            // 但是后面的部分也还在cache里
            while (cin.get() != '\n')
                continue;
            cout << "Please enter a number: ";
        }
    }

    for (int i : golf)
        cout << i << endl;

    return 0;
}