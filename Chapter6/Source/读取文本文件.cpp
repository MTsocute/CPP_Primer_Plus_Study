//
// Created by Momo on 2023/6/29.
//
#include <iostream>
#include <fstream>
#include <cstdlib>          // support for exit()
#include <cstring>

using namespace std;

const char * PATH = "/Users/momo/Desktop/CPP/Chapter6/data/fish.txt";

ifstream rFile; // 用于从文件中读取文本

void rFile_demo() {
    rFile.open(PATH);

    // 检测文件打开成功与否
    if(!rFile.is_open()) {  // 成功打开会返回 True，反之 False
        exit(EXIT_FAILURE);
    }

    char content[24];
    rFile.getline(content, 24);

    cout << content << endl;

    rFile.close();
}



void sumaFile()
{
    using namespace std;
    string filename;
    ifstream inFile;        // object for handling file input

    cout << "Enter name of data file: ";
    cin >> filename;

    string path = "/Users/momo/Desktop/CPP/Chapter6/data/";

    string filepath = path + filename;

    cout << filepath << endl;

    inFile.open(filepath);  // associate inFile with a file
    if (!inFile.is_open())  // failed to open file
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;          // number of items read

    inFile >> value;        // get first value
    while (inFile.good())   // while input good and not at EOF
    {
        ++count;            // one more item read
        sum += value;       // calculate running total
        inFile >> value;    // get next value
    }
    if (inFile.eof())       // EOF Inspect
        cout << "End of file reached.\n";
    else if (inFile.fail())     // Check whether get a data properly or not
        cout << "Input terminated by data mismatch.\n";
    else
        cout << "Input terminated for unknown reason.\n";
    if (count == 0)
        cout << "No data processed.\n";
    else
    {
        cout << "Items read: " << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum / count << endl;
    }
    inFile.close();         // finished with the file

}


int main() {

    sumaFile();
    return 0;
}
