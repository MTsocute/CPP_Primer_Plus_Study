// strgback.cpp -- a function that returns a pointer to char
#include <iostream>

char *buildstr(char c, int n);     // prototype

int main() {
    using namespace std;
    int times;
    char ch;

    cout << "Enter a character: ";
    cin >> ch;
    cout << "Enter an integer: ";
    cin >> times;
    char *ps = buildstr(ch, times);
    cout << ps << endl;
    delete[] ps;                   // free memory
    ps = buildstr('+', 20);         // reuse pointer
    cout << ps << "-DONE-" << ps << endl;
    delete[] ps;                   // free memory

    return 0;
}

// 利用动态存储方法返回一个字符串内容的函数
char *buildstr(char c, int n) {
    // allocate memory for string
    char *pstr = new char[n + 1];
    // terminate string
    pstr[n] = '\0';         // terminate string
    // fill rest of string
    while (n-- > 0)
        pstr[n] = c;        // fill rest of string
    // return pointer to beginning of string
    return pstr;    //  return pointer to beginning of string
}