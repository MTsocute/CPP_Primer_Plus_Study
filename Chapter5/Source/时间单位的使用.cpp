//
// Created by Momo on 2023/6/27.
//
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    cout << "Delay time in second: ";
    float secs;
    cin >> secs;

    // 把秒数转换成系统时间对应的时间里
    // 注意这个常量来自于 ctime 用于做系统时间和秒的转换 (表示：系统时间/秒)
    // 所以可以那 秒 * 常量 = 秒对应的系统时间
    // clock_t 就是系统时间专门用的声明量
    clock_t delay = secs * CLOCKS_PER_SEC;

    cout << "starting\a\n";

    clock_t start = clock();    // 记录当前时间

    while (clock() - start < delay);

    cout << "End\a\n";
    return 0;
}