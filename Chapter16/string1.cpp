// strfile.cpp -- read strings from a file
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

int main() {
    using namespace std;
    ifstream fin;
    fin.open("/Users/momo/Desktop/CPP/Chapter16/data/tobuy.txt");
    if (!fin.is_open()) {
        cerr << "Can't open file. Bye.\n";
        exit(EXIT_FAILURE);
    }
    string item;
    int count = 0;
    // 使用指定符号分隔的读取字符串
    getline(fin, item, ':');
    while (fin) // while input is good
    {
        ++count;
        cout << count << ": " << item << endl;
        getline(fin, item, ':');
    }
    cout << "Done\n";
    fin.close();
    return 0;
}