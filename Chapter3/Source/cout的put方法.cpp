//
// Created by Momo on 2023/6/22.
//
#include <iostream>

using namespace std;


void char_using_cout_put() {
    char ch = 'M';
    int i = (unsigned char) ch;
    cout << "The ASCII of " << ch << " is "
         << i << endl;

    cout << "Display a char using cout.put(ch): " << endl;
    // 输出单个字符到屏幕，不能是字符串
    cout.put(ch);
    cout.put('!') << endl;
}


int main() {
    char_using_cout_put();
    return 0;
}
