//
// Created by Momo on 2023/7/25.
//

#include "../Header/return_val.h"

int main() {
    Vector v1(2.1, 2.0);
    float demo = v1.magval();
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.precision(2);

    cout << demo << endl;
    cout << v1 << "is coming!\n";
    return 0;
}