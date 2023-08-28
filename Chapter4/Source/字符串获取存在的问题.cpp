//
// Created by Momo on 2023/6/24.
//
#include <iostream>

using namespace std;

// cin >> 给数字赋值遗留的 '\n' 问题
void cin_problem() {
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
}

// cin.get() 给字符串赋值遗留 '\n' 在缓存区的 或 长度超出字符串的范围的问题
void cin_string_problem() {
    char a[5];
    char b[5];
    /* 1. 输入短少的字符，会让第一个 cin.get() 读取到 '\n' 停止，然后 '\n' 留在缓存区
     * 2. 输入的字符过多，溢出，但是没有清理缓存区，下一次 cin.get() 直接读取缓存区的内容
     * */
    cin.get(a, 5);
    cin.get(b, 5);

    cout << a << endl;
    cout << b << endl;
    cout << "Done\n";
}

// cin.getline() 只有长度溢出影响下一次的问题
void cin_string_problem_2() {
    char a[5];
    char b[5];
    /* 输入的字符过多，溢出，但是没有清理缓存区，
     * 下一次 cin 直接读取缓存区的内容，跳过读取
     * */
    cin.getline(a, 5);
    cin.get(b, 5);

    cout << a << endl;
    cout << b << endl;
    cout << "Done\n";
}


// 使用 cin.ignore() 清理缓存区多余数据的
void clean_cache() {
    char a[5];
    char b[5];
    /* 输入的字符过多，溢出，但是没有清理缓存区，
     * 下一次 cin 直接读取缓存区的内容，跳过读取 */
    cin.get(a, 5);
    cin.ignore(1000, '\n');
//    cin.ignore();
    cin.getline(b, 5);

    cout << a << endl;
    cout << b << endl;
    cout << "Done\n";
}

int main() {
    clean_cache();

    return 0;
}
