//
// Created by Momo on 2023/6/27.
//
#include <iostream>

using namespace std;

// 颠倒字符串
string reverse_string(string string_to_reverse) {
    char temp;
    // 逗号表达式，让多个表达式融入到一个 for 操作中
    for (int end = string_to_reverse.size()-1, head = 0; head < end;
            --end, ++head)
    {
        temp = string_to_reverse[head];
        string_to_reverse[head] = string_to_reverse[end];
        string_to_reverse[end] = temp;
    }
    return string_to_reverse;
}

void compare_string() {
    char mate[5] = "mate";
    cout << (mate == "mate") << endl;
}
int main() {
    cout << "Enter a word: ";
    string word;
    cin >> word;

    string wordReversed = reverse_string(word);
    cout << wordReversed << endl;

    return 0;
}