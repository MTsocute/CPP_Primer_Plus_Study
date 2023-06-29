//
// Created by Momo on 2023/6/29.
//
#include <iostream>

// create named constants for 0 - 6
enum {
    red, orange, yellow, green, blue, violet, indigo
};
using namespace std;

// enum. app -- using enum
int main() {
    cout << "Enter color code (0-6): ";
    int code;
    cin >> code;
    while (code >= red && code <= indigo) {
        switch (code) {
            case red:
                cout << "Her lips were red. In";
                break;
            case orange:
                cout << "Her hair was orange. \n";
                break;
            case yellow:
                cout << "Her shoes were yellow. \n";
                break;
            case green :
                cout << "Her nails were green. \n";
                break;
            case blue:
                cout << "Her sweatsuit was blue. \n";
                break;
            case violet :
                cout << "Her eyes were violet. \n";
                break;
            case indigo:
                cout << "Her mood was indigo. \n";
                break;
        }
        cout << "Enter color code (0-6): ";
        cin >> code;
        cout << "Bye\n";
    }
    return 0;
}