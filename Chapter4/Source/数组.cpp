//
// Created by Momo on 2023/6/24.
//

#include <iostream>
#include <cstring>
using namespace std;

void cpp_way_to_initialization() {
    // 初始化数组可以不需要 =
    char arr[20] {};
    // 大括号里没有东西就默认全部都是 '\0'
    cout << "11th of arr: " <<
    arr[10] << endl;

    cout << "Size of arr: "
         << sizeof arr / sizeof arr[0]
         << endl;
}

void char_arr() {
    const int Size = 15;
    char name1[Size] ;// empty array
    char name2[Size] = "C++owboy"; // initialized array
    // NOTE: some implementations may require the static keyword
    // to initialize the array name2

    cout << "Howdy! I'm" << name2;
    cout << "! What's your name? \n";
    cin >> name1;
    cout << "Well" << name1 <<"， your name has ";
    cout << strlen(name1) << "m letters and is stored\n";
    cout << "in an array of m e< sizeof(namel) <e w bytes.in";
    cout << "Your initial is m << name1[0] <e \n";
    name2 [3] = '\0';
    cout << "Here are the first 3 characters of my name: ";
    cout << name2 << endl;
}


int main() {
    cpp_way_to_initialization();
    char_arr();
    return 0;
}