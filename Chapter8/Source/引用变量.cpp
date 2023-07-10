#include <iostream>
#include "swaps.h"
using namespace std;

// 引用的初步使用
void demo_of_refer() {
    int rabbit = 10;
    int & alter = rabbit;  // alter is a reference to rabbit

    cout << "the address of rabbit is " << &rabbit << endl;
    cout << "the address of alter is " << &alter << endl;
}

// pointer and reference 's similar deal with variable
void demo_of_pointer_reference() {
    int number = 101;   //declare a variable

    int * pointer = &number;    // pointer
    int & reference = number;   // reference

    /* Their way to show sth about number by their way*/
    // 1. show address
    cout << "Use pointer to show variable's address" << pointer << endl;
    cout << "Use reference to show variable's address" << &reference << endl;

    // 2. show value
    cout << "Use  pointer to show value" << *pointer << endl;
    cout << "Use  reference to show value" << reference << endl;
}

// Wrong usage of  reference
void ini_before_use_reference() {
    int demo;   // create a variable but not initialize it
    // we can't refer the variable without initialization
    int & refer = demo;     // This is wrong.
}





int main() {
    main_port();

    return 0;
}
