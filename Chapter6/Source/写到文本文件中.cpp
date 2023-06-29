//
// Created by Momo on 2023/6/29.
//
#include <iostream>
#include <fstream>

using namespace std;
const char *PATH = "/Users/momo/Desktop/CPP/Chapter6/data/fish.txt";


void writeFIle() {
    ofstream wFile;
    char saySomething[20];
    cin.get(saySomething, 100);

    wFile.open(PATH);

    // 写入字符串到文本当中去
    wFile << saySomething << endl;

    wFile.close();
    cout << "Done\n" << endl;
}

void demo() {
    char automobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream outFile;               // create object for output
    outFile.open("../data/carinfo.txt");    // associate with a file

    cout << "Enter the make and model of automobile: ";
    cin.getline(automobile, 50);
    cout << "Enter the model year: ";
    cin >> year;
    cout << "Enter the original asking price: ";
    cin >> a_price;
    d_price = 0.913 * a_price;

    // display information on screen with cout

    cout << fixed;                     // 可以强制 cout 以固定的小数位数表示法输出浮点数，而不考虑数值的大小
    cout.precision(2);                  // 浮点数输出保留后两位小数
    cout.setf(ios_base::showpoint);     // 指示输出浮点数时总是显示小数点。小数部分为零，也会显示小数点
    cout << "Make and model: " << automobile << endl;
    cout << "Year: " << year << endl;
    cout << "Was asking $" << a_price << endl;
    cout << "Now asking $" << d_price << endl;

    // now do exact same things using outFile instead of cout

    /* 指定好写入文件的格式 */
    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);

    outFile << "Make and model: " << automobile << endl;
    outFile << "Year: " << year << endl;
    outFile << "Was asking $" << a_price << endl;
    outFile << "Now asking $" << d_price << endl;

    outFile.close();                // done with file
}


int main() {
//    writeFIle();
    demo();
    return 0;
}