//
// Created by Momo on 2023/7/25.
//

#ifndef C___RETURN_VAL_H
#define C___RETURN_VAL_H

#include <iostream>
#include <cmath>

using namespace std;

class Vector {
public:
    Vector() : x(0.0f), y(0.0f) {}

    Vector(float val1, float val2) : x(val1), y(val2) {}

    float magval() const; // 返回向量的模

    /* 不同的返回对象的方法 */

    // 1. 直接返回对象（但是会返回复制的样本）
    Vector Max(const Vector &v1, const Vector &v2);

    // 2. 返回const引用对象
    // 用于直接返回参数本体，所以函数类型要和独享类型一致
    const Vector &Max_2(const Vector &v1, const Vector &v2);

    // 3. 返回非const引用对象
    friend ostream &operator<<(ostream &cout, const Vector &v);

private:
    float x;
    float y;

};

inline float Vector::magval() const {
    return sqrtf(powf(this->x, 2) + powf(this->y, 2));
}

Vector Vector::Max(const Vector &v1, const Vector &v2) {
    if (v1.magval() > v2.magval())
        return v1;
    else
        return v2;
}

const Vector &Vector::Max_2(const Vector &v1, const Vector &v2) {
    if (v1.magval() > v2.magval())
        return v1;
    else
        return v2;
}

ostream &operator<<(ostream &cout, const Vector &v) {
    cout << "x = " << v.x
         << " y = " << v.y << endl;
    return cout;
}

#endif //C___RETURN_VAL_H
