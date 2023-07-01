// arrfun4.cpp -- functions with an array range
#include <iostream>
#include <random>
const int ArSize = 8;
using namespace std;

// 这个函数使用了 两个指针作为参数，两个指针正好就是数组的头和尾
int sum_arr(const int * begin, const int * end);


int main()
{
    using namespace std;
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};
    //  some systems require preceding int with static to
    //  enable array initialization

    int sum = sum_arr(cookies, cookies + ArSize);
    cout << "Total cookies eaten: " << sum <<  endl;
    sum = sum_arr(cookies, cookies + 3);        // first 3 elements
    cout << "First three eaters ate " << sum << " cookies.\n";
    sum = sum_arr(cookies + 4, cookies + 8);    // last 4 elements
    cout << "Last four eaters ate " << sum << " cookies.\n";
    // cin.get();
    return 0;
}



int sum_arr(const int * begin, const int * end)
{
    const int * pt;
    int total = 0;

    for (pt = begin; pt!= end; pt++)
        total = total + *pt;
    return total;
}