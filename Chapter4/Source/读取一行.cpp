//
// Created by Momo on 2023/6/24.
//

#include <iostream>

using namespace std;

/**
 * 两个函数都停止在 '\n'
    * 但是 getline() 如果不超过指定数量，就会包括结尾的 '\n'，如果超过最后一个位置的 '\n' 会被替换成 '\0'
    * get() 就是默认在 '\n' 停止，但是不读取，所以'\n' 会遗留在缓冲区造成问题
 * 所以两个函数在一缓存区溢出问题上各有千秋，我们具体看 字符串获取存在问题.cpp 中这个文件了解详情
 * */


// 使用getline()读取一整行，包括空格和换行符
void use_get_line() {
    char arr[20];
    cout << "Input a name plz: \n";

    cin.getline(arr, 20);
    cout << "Your name is :" << arr << endl;

    puts("End~~~~");
}

// 使用get()读取指定数量数据，不包括换行符
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