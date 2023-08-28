//
// Created by Momo on 2023/8/27.
//

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

void put_data_to_file() {
    // ofstream 使用 << 往文件中写入内容
    ofstream fout;  // put data out

//    fout.open("./data/jar.txt");

    // 打开文件
    fout.open("/Users/momo/Desktop/CPP/Chapter17/data/jar.txt");

    // 检查文件是否成功打开
    if (fout.is_open()) {
        fout << "Doge!\n";  // 向文件中写入内容
        cout << "Data Input Completed\n";
    } else cout << "File Missing!\n";

    // 文件的关闭
    fout.close();
}

/* ifstream 采用 cache 的缓存输出的机制，更加的快 */
void fstream_in_use() {
    ifstream ifs;   // 创建一个类似于 cin 的写文件方法
    ifs.open("/Users/momo/Desktop/CPP/Chapter17/data/jar.txt");

    if (ifs.is_open()) {
        char buf[80];
        // ifstream 从文件中读取内容`
        ifs.read(buf, 80);

        while (cin.get() != '\n')
            continue;

        cout << "Text in the file [80]:\n" << buf << endl;
    } else cout << "File Not Found\n";

    ifs.close();
}


// 读取文件 C++ Style (推荐)
void read_file_1() {
    string Path = "/Users/momo/Desktop/CPP/Chapter17/data/";
    string target = "jar.txt";
    ifstream fin (Path + target, ios_base::in);

    if (fin.is_open()) {
        cout << "File is Open\n" << "Data of file: \n";
        string content;
        while (getline(fin, content))
            cout << content << endl;
        fin.close();
    }
    else cerr << "File Not Found!\n";
}

// 读取文件 C-style
void read_file_2() {
    char Path[] = "/Users/momo/Desktop/CPP/Chapter17/data/";
    char target[] = "jar.txt";

    char * file = strcat(Path, target);

    char buffer[100];
    ifstream fin (file, ios_base::in);

    if (fin.is_open()) {
        while (fin.getline(buffer, 100))    // 第二个参数是缓冲区，要保证够大
            cout << buffer << endl;
        fin.close();
    } else { cerr << "File Not Found!\n"; }
}



int main() {
    return 0;
}