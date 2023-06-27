//
// Created by Momo on 2023/6/27.
//

#include <iostream>
#define STOP '#'
using namespace std;

/** 使用 cin 实现外部字符串接受
 *  这有一个大缺点，就是 cin 会忽略空白，就是 \n \t space
 *  这种不显示的符号
 * */
void getInput_by_cin() {
    char ch{};
    int count = 0;
    cout << "plz input sth: ";
    cin >> ch;
    while (ch != STOP) {
        cout << ch;
        count++;
        cin >> ch;
    }
    cout << endl << count << " characters read\n";
}


/** 使用 cin.get(char) 解决上面的空白忽略问题
 * 可以看到所有空白不显示的都可以输出出来了
 * */
void getInput_by_cinGet() {
    char ch{};
    int count = 0;
    cout << "plz input sth: ";
    cin.get(ch);
    while (ch != STOP) {
        cout << ch;
        count++;
        cin.get(ch);
    }
    cout << endl << count << " characters read\n";
}

// 使用 EOF 作为结束输入符号
void getInput_cinGet_endBy_EOF()
{
    int count = 0;
    char ch{};
    cout << "plz input sth:";
    cin.get(ch);
    // 检测结束输入
    while (!cin.eof()) {    // 没有检测到 EOF 就一直输入
        cout << ch;
        count++;
        cin.get(ch);
    }
    cout << endl << count << " characters read\n";
}

// cin.get() 另一种使用方法
void getInput_cinGet2_endBy_EOF()
{
    int count = 0;
    char ch{};
    cout << "plz input sth:";

    // 检测结束输入
    while ((ch = (char )cin.get()) != EOF) {    // 没有检测到 EOF 就一直输入
        cout.put(ch);   // 新的字符输出函数
        count++;
    }
    cout << endl << count << " characters read\n";
}

int main() {
//    getInput_by_cin();
//    getInput_by_cinGet();
//    getInput_cinGet_endBy_EOF();
    getInput_cinGet2_endBy_EOF();
    return 0;
}