//
// Created by Momo on 2023/8/12.
//

#include <iostream>
#include <exception>

using namespace std;


void throw_unexpected_err1() {
    try {
        throw;  // 不写类型的错误，一般的 catch() 是捕获不了错误的
    }
        // 使用 catch(...) {} 捕获一切异常
    catch (...) {
        cout << "we can use catch(...) {} to catch all errors\n";
    }
}

void throw_unexpected_err2() {
    try {
        throw;  // 不写类型的错误，一般的 catch() 是捕获不了错误的
    }
    catch (const char *s) {
        cout << "provide normal error catch, so that if there is error unexpected."
                "\nwe can catch it by std::bad_exception\n";
    }
        // 这个 bad_exception 可以用于捕获前面没 catch 到的错误
    catch (std::bad_exception) {
        cout << "we can use catch(...) {} to catch all errors\n";
    }
}

int main() {
    throw_unexpected_err1();

    throw_unexpected_err2();
    return 0;
}