//
// Created by Momo on 2023/6/24.
//
#include <iostream>

using namespace std;

/* 你输入了年份后你会发现你都还没输入地址就直接运行到结束了 */
int main() {
    cout << "When did you build your house ?\n";
    int year;
    cin >> year;    // 这里有一个问题，就是读取了数字以后，在缓存区保留了 '\n'


    cout << "And where is your house? \n";
    char location[20];
    // 缓存区还有一个换行符号，然后 getline() 读取缓存区的时候就读到了这个
    // 缓存区前的内容啥也没有就是空字符了
    cin.getline(location, 20);

    cout << "The year you built your house: " << year << endl;
    cout << "The address of  your house: " << location << endl;

    puts("Done!");
    return 0;
}
