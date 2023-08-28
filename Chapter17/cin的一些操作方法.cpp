//
// Created by Momo on 2023/8/24.
//
#include <iostream>

using namespace std;

/** cin 的问题
 * cin 是按照空格符（\t \n space） 和不同类型，来获取数据流的
 * 那么不对应的类型会被留在数据流中等待下一次读取，会造成问题
 * */
void cin_issue() {
    cout << "Enter numbers: ";

    int sum = 0;
    int input;
    // 我们输入 -12 211Z 123，会读取不到 123
    // Z 被留在了数据流中，下一次读取的时候 cin --> Z 不是 int 类型，导致了 while(False)
    while (cin >> input) {  // cin 如果读取失败的话，会返回一个 false
        sum += input;
    }
    if (cin.fail()) // 检测是否读取失败
        cout << "Failed to load the stream\n";

    // 使用 ctrl-D 来引发这个错误
    if (cin.eof())  // 检测是否读取到输入的数据流的最后
        cout << "Loop terminated because EOF encountered\n";

    // 获取不到 123 被 Z 阻塞了，所以返回是 0
    cout << "Last value entered = " << input << endl;
    cout << "Sum = " << sum << endl;
}

// 对于 cin 数据流问题的处理
void solve_issue() {
    cout << "Enter numbers: ";

    int sum = 0;
    int input;
    while (cin >> input)
        sum += input;

    if (cin.fail() and cin.eof()) {
        cin.clear();    // 清除错误状态

        // 清理数据流中的错误
        while (!isspace(input))
            continue;
    } else {
        cout << "Some Errors Unknown\n";
        exit(1);
    }

    cout << "Last value entered = " << input << endl;
    cout << "Sum = " << sum << endl;
}

void get_one_line_and_not_empty() {
    const int maxLength = 10;  // 限制最大长度为10个字符
    char line[maxLength];  // 声明一个字符数组

    std::cout << "请输入文本 (最多" << maxLength - 1 << "个字符): \n";
    while ((cin.getline(line, maxLength))) {
        if (line[0] != '\n')
            puts(line);
    }
}

// cin.gcount() 的使用方法
void gcount_in_use() {

    char buffer[100];

    std::cout << "Enter a sentence: ";
    std::cin.getline(buffer, sizeof(buffer));

    int bytesRead = cin.gcount(); // 获取读取的字符数（包括换行符）

    std::cout << "You entered: " << buffer << std::endl;
    std::cout << "Characters read: " << bytesRead << std::endl;
}

// putback 的使用
void putback_in_use() {
    char choice;

    std::cout << "欢迎来到菜单选择程序！\n";
    std::cout << "请选择操作:\n";
    std::cout << "a. 查看余额\n";
    std::cout << "b. 存款\n";
    std::cout << "c. 取款\n";

    // 读取用户输入的选项
    std::cin >> choice;

    switch (choice) {
        case 'a':
            std::cout << "您选择了查看余额操作。\n";
            break;
        case 'b':
            std::cout << "您选择了存款操作。\n";
            break;
        case 'c':
            std::cout << "您选择了取款操作。\n";
            break;
        default:
            std::cout << "无效的选项！请重新选择。\n";
            // 将错误的选项放回输入流，以便重新读取
            std::cin.clear(); // 清除错误状态
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // 清除输入缓冲
            std::cin.putback(choice);
            break;
    }
}

// 利用 cin.peek() 循环读取
void peek_in_use() {
    char ch;
    puts("请输入字符或字符串：");
    while (cin.peek() != '#') {
        cin.get(ch);
        cout << ch;
    }
}


int main() {
    return 0;
}