//
// Created by Momo on 2023/6/22.
//
// limits.opp -- some integer limits
#include <iostream>
#include <climits>
using namespace std;
int main () {
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "int is " << sizeof n_int << " bytes." << endl;
    cout << "short is " << sizeof n_short << " bytes." << endl;
    cout << "long is " << sizeof n_long << " bytes." << endl;
    cout << "long long is " << sizeof n_llong << " bytes." << endl;

    cout << endl;

    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl;

    cout << endl;

    cout << "Minimum value of int: " << INT_MIN << endl;

    cout << endl;

    cout << "Bits per Byte: " << CHAR_BIT << endl;

    return 0;
}
