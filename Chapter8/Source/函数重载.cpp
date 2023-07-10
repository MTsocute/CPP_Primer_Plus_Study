//
// Created by Momo on 2023/7/9.
//
#include <iostream>

using namespace std;

unsigned long left(unsigned long num, unsigned ct);

char *left(const char *str, int n = 1);


int main() {

    return 0;
}


// return the ct number of num in order
unsigned long left(unsigned long num, unsigned ct) {
    unsigned digits = 1;      // to count how many bit of number the num have
    unsigned long n = num;
    // Handle with the condition where we get the number of digits or users put 0
    if (num == 0 or ct == 0)
        return 0;

    while (n /= 10)
        digits++;      // count the bits of the num

    if (digits > ct) {
        ct = digits - ct;   // the bits that we don't need
        while(ct--)     // use times of ct to get the part we wanna
            num /= 10;
        return num;
    } else    // the bits user wanna is greater than the num, so return whole number
        return num;
}

// return the first n number of str
char *left(const char *str, int n) {
    if (n <= 0)     // we can't get minus number of characters
        return nullptr;
    char * temp = new char[n + 1];  // to store the n number of string we wanna
    int i = 0;
    for (; i < n; ++i)
        temp[i] = str[i];
    temp[n] = '\0';
    return temp;
}


