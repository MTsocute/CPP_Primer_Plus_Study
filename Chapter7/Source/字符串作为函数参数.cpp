// handling an array of string objects
#include <iostream>
#include <string>

using namespace std;
const int SIZE = 5;

void display(const string sa[], int n);

int main() {
    string list[SIZE];     // an array holding 5 string object
    cout << "Enter your " << SIZE << " favorite astronomical sights:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << i + 1 << ": ";
        // 注意这里把cin获取字符串字节写入到string对象中
        getline(cin, list[i]);
    }

    cout << "Your list:\n";
    display(list, SIZE);

    return 0;
}

// 使用 string 数组接收很多字符串
void display(const string sa[], int n) {
    for (int i = 0; i < n; i++)
        cout << i + 1 << ": " << sa[i] << endl;
}