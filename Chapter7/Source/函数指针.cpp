#include <iostream>
#include "funPointer.h"

using namespace std;

/* 使用函数指针的演示 */
void demo_of_function_pointer() {
    // 使用函数指针指向 showpower
    demo = &showpower;

    // 调用函数指针，间接调用函数
    demo();

    // 解引用调用函数指针
    (*demo)();
}


void use_estiamte() {
    int code;

    cout << "How many lines of code do you need? ";
    cin >> code;
    cout << "Here's Betsy's estimate:\n";
    estimate(code, betsy);
    cout << "Here's Pam's estimate:\n";
    estimate(code, pam);
}

// 函数指针数组
const double * (*pa[3])(const double *arr, int mount) = {f1, f2, f3};

// 创建一个指向函数数组指针的指针
const double * (*(*pd)[3])(const double *arr, int mont) = &pa;


// 依靠 auto 自动创建对应类型的函数指针
void tips_of_auto_in_funcPointer() {
    // 注意这里 f2 不是一个变量而是一个函数的名字，就是函数地址
    auto p1 = showpower;

    // 返回 p1 函数指针的地址
    cout << "p1 address: " << &p1 << endl;
}


int main() {
    double number = 123;
    // 函数指针数组的使用
    auto px1 = pa[0](&number, 10);

    //  equal to pa[1](number, 10);
    auto px2 = (*(pa+1))(&number, 10);
    return 0;
}


const double *f1(const double *arr, int mount) {
    cout << "f1 called.\n";
    return nullptr;
}

const double *f2(const double *arr, int mount) {
    cout << "f2 called.\n";
    return nullptr;
}

const double *f3(const double *arr, int mount) {
    cout << "f3 called.\n";
    return nullptr;
}

void showpower() {
    cout << "I am Power!" << endl;
}

double betsy(int lns) {
    return 0.05 * lns;  // 返回一个时间
}

double pam(int lns) {
    return 0.03 * lns + 0.0004 * lns * lns;     // 返回一个时间
}

void estimate(int lines, double (*pf)(int)) {
    using namespace std;
    cout << lines << " lines will take ";
    cout << (*pf)(lines) << " hour(s)\n";
}