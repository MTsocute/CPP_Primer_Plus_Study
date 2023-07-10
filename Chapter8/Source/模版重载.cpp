//
// Created by Momo on 2023/7/9.
//
#include <iostream>

using namespace std;

struct job {
    char name[40];
    double salary;
    int floor;
};

/* 对于函数，使用模版也会重载，到那时优先度会低于普通函数
 * 但是如果我们使用 显式具体化（explicit specialization）就可以优先于普通函数
    * 重载使用的优先度关系就是：
        * 非模版函数 -> 显示具体化 -> 模版函数
 * */

// non-template function
void swap_demo(job &, job &);

// template function
template<typename T>
void swap_demo(T &, T &);

// explicit specialization function
// 模版函数可以处理很多不同的类型的参数
// 接受各类的参数都统一模版的处理，我们假如要对其中某种类型的参数进行特殊处理，就用这个
// 通俗来讲，就是我们要专门处理这个 job 类型的参数不走那个一般的模版函数，走这个特殊的模版函数
template<> void swap_demo<job>(job &, job &);   // simple form: template<> void swap_demo(job &, job &)


void Show(job &j);

int main()
{
    using namespace std;
    cout.precision(2);
    cout.setf(ios::fixed, ios::floatfield);
    int i = 10, j = 20;
    cout << "i, j = " << i << ", " << j << ".\n";
    cout << "Using compiler-generated int swapper:\n";
    swap_demo(i,j);    // generates void Swap(int &, int &)
    cout << "Now i, j = " << i << ", " << j << ".\n";

    job sue = {"Susan Yaffee", 73000.60, 7};
    job sidney = {"Sidney Taffee", 78060.72, 9};

    cout << "Before job swapping:\n";
    Show(sue);
    Show(sidney);

    swap_demo(sue, sidney); // uses void swap_demo(job &, job &)

    cout << "After job swapping:\n";
    Show(sue);
    Show(sidney);
    return 0;
}

template <typename T>
void swap_demo(T &a, T &b)    // general version
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

// swaps just the salary and floor fields of a job structure
template <> void swap_demo<job>(job &j1, job &j2)  // specialization
{
    double t1;
    int t2;
    t1 = j1.salary;
    j1.salary = j2.salary;
    j2.salary = t1;
    t2 = j1.floor;
    j1.floor = j2.floor;
    j2.floor = t2;
}

void Show(job &j)
{
    using namespace std;
    cout << j.name << ": $" << j.salary
         << " on floor " << j.floor << endl;
}