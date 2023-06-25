//
// Created by Momo on 2023/6/25.
//
#include <iostream>

using namespace std;

struct Human {
    string name;
    double bankAccount;
};


// 结构指针的使用
void use_of_struct_pointer() {
    Human human1{
            "momo",
            1e19
    };
    Human *p1 = &human1;

    cout << p1->name << endl;
}

// 结构指针数组的使用
void structPointer_arr() {
    Human human1{
            "momo",
            1e19
    };
    Human human2{
            "dog",
            1e19
    };
    Human human3{
            "cat",
            1e19
    };

    /* 结构指针数组 */
    Human *pArr[3] = {&human1, &human2, &human3};

    for (auto &i: pArr) {
        cout << i->name << endl;
    }
}


// 二级指针和使用
void double_pointer() {
    Human human1{
            "momo",
            1e19
    };
    Human human2{
            "dog",
            1e19
    };
    Human human3{
            "cat",
            1e19
    };
    /* 结构指针数组 */
    Human *pArr[3] = {&human1, &human2, &human3};

    // 二级指针：指向指针数组
    Human **ppHuman = pArr;

    // 使用 auto 来自动判别类型
    auto ppHuman2 = pArr;

    // 使用二级指针访问指针数组
    /* 二级指针指向的就是一个指针了
     * 结构指针访问结构体的方法就是 ->
     * 那么我们解引用指针返回来了就是结构体指针，然后结构体指针再去 -> 访问元素吧
     * */
    cout << (*ppHuman)->name << endl;
    // 位移
    cout << (*(ppHuman+1))->name << endl;

    // 由于其本身还是数组结构，所以可以用数组名找到对应的指针直接使用
    // 而且二级指针指向的就是数组首地址，所以可以和数组进行一样的操作
    cout << ppHuman[0]->name << endl;
    cout << ppHuman[1]->name << endl;
}

int main() {
    double_pointer();
    return 0;
}