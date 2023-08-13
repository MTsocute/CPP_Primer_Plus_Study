//
// Created by Momo on 2023/8/11.
//
#include <iostream>
#include <exception>
#include <string>

class myexception : public std::exception {
public:
    myexception(unsigned int code, const std::string &what_arg)
            : m_code(code), m_what_arg(what_arg) {
    }

    // 重写 exception 自带的的字符串提示
    virtual const char *what(void) const noexcept override {
        auto text = "错误代码：" + std::to_string(m_code) + "\r\n错误信息：" + m_what_arg;
        return text.c_str();    // string --> char *
    }

private:
    unsigned int m_code;
    std::string m_what_arg;
};

int main() {
    try {
        throw myexception(10086, "这是一个很严重的错误");
    }

    // 由于是通过 exception 是基类，我们可以用其接受一切派生类
    catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}