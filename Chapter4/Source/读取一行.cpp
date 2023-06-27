//
// Created by Momo on 2023/6/24.
//

#include <iostream>

using namespace std;

// getline() 函数的使用
void use_get_line() {
    char arr[20];
    cout << "Input a name plz: \n";

    /* 向数组中输入字符串
         * 用 \n 确定结尾位置
         * 用空白字符替换结尾，所以不包括换行符在字符中
     * */
    cin.getline(arr, 20);
    cout << "Your name is :" << arr << endl;

    puts("End~~~~");
}

// get() 方法会保留结尾的换行
void use_get() {
    char input[256];

    std::cout << "Enter a string: ";
    std::cin.get(input, 256);

    std::cout << "You entered: " << input << std::endl;

    puts("End~~~~");
}

int main() {
//    use_get_line();
    use_get();
    return 0;
}