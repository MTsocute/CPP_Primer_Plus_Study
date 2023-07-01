//arrobj.cpp -- functions with array objects
#include <iostream>
#include <array>
#include <string>

const int Seasons = 4;
const std::array<std::string, Seasons> Snames =
        {"Spring", "Summer", "Fall", "Winter"};

void fill(std::array<double, Seasons> *pa);

void show(std::array<double, Seasons> da);

int main() {
    std::array<double, 4> expenses;
    fill(&expenses);
    show(expenses);
    return 0;
}

// 模版指针作为形式参数接收模版
void fill(std::array<double, Seasons> *pa) {
    for (int i = 0; i < Seasons; i++) {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        // 写入值到模版当中
        std::cin >> (*pa)[i];   // 模版指针的解引用
    }
}

// 模版作为形式参数接收模版
void show(std::array<double, Seasons> da) {
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++) {
        std::cout << Snames[i] << ": $" << da[i] << '\n';
        total += da[i];
    }
    std::cout << "Total: $" << total << '\n';
}