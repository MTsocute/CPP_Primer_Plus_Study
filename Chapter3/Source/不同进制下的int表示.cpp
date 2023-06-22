//
// Created by Momo on 2023/6/22.
//

#include <iostream>
using namespace std;

// Shows hex and octal literals to decimal
void show_hex_and_octal() {
    int chest = 42;
    int waist = 0x42;       // hex
    int inseam = 042;       // oct

    cout << "Chest = " << chest << endl;
    cout << "Waist = " << waist << endl;
    cout << "Inseam = " << inseam << endl;
}

// Transform from decimal to hex and octal
void transform_to_decimal() {
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "chest: " << chest << " (decimal for 42)" << endl;
    cout << hex;
    cout << "waist: " << waist << " (hexadecimal for 42)" << endl;
    cout << oct;
    cout << "inseam: " << inseam << " (octal for 42)" << endl;
}


int main() {
    transform_to_decimal();
    return 0;
}