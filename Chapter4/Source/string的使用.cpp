//
// Created by Momo on 2023/6/24.
//

#include <iostream>
#include <string>

using namespace std;

// string 对象的初始化
void ini_of_string() {
    string str1 = {"Hello"};
    string str2 {" World"};
}

// string 对象使用运算符合并字符串
void operator_of_string() {
    string str1 = {"Hello"};
    string str2 {" World!"};

    // 相比与 strcpy() 和 strcat(),
    // string 最大的有点就是不用考虑数组溢出的问题
    string str3 = str1 + str2;
    str1 += str2;

    cout << str1 << endl;
    cout << str3 << endl;
}

// string 对象的 size() 方法：确定字符串中字符的数量
void get_char_num_of_string() {
    string gellory= "life is fucking moive!\n";

    int len = gellory.size();

    cout << "Character number of gellory is: " << len << endl;
}


// C++特有的字符串遍历方法
void iter_CPP_string() {
    string beautiful = "My life is brilliant and my life is pure.";

    for (int i = 0; i < beautiful.size()-1; ++i) {
        cout << beautiful[i] << endl;
    }
}

int main() {
    get_char_num_of_string();
    return 0;
}