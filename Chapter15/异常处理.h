//
// Created by Momo on 2023/8/11.
//

#ifndef C___异常处理_H
#define C___异常处理_H

#include <iostream>

using namespace std;

void try_catch_demo() {
    double m, n;
    cin >> m >> n;
    try {
        cout << "before dividing." << endl;
        if (n == 0)
            throw -1; //抛出int类型异常
        else if (m == 114154)
            throw "好臭的数字\n";
        else
            cout << m / n << endl;
        cout << "after dividing." << endl;
    }
    catch (double d) {
        cout << "catch(double) " << d << endl;
    }
    // 根据 try 部分抛出的类型，进行不同的处理
    catch (int e) {
        cout << "catch(int) " << e << endl;
    }
    // 可以捕捉任何异常的 catch()
    catch (...) {
        cout << "catch(...) " << "Some Wrong Unknown\n";
    }
    cout << "finished\n";
}

#endif //C___异常处理_H
