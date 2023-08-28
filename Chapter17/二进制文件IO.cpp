#include <iostream>
#include <fstream>

using namespace std;

static string path = "/Users/momo/Desktop/CPP/Chapter17/data/";

struct mydemo {
    string name;
    int age;
    bool gender;
};


/* 写入二进制数据 */
void bin_write() {
    string file = path + "binary_data.dat";
    // 设置写入二进制所用的参数
    ofstream ofs(file.c_str(), std::ios::binary | ios_base::out);

    if (ofs.is_open()) {
        int data[] = {10, 20, 30, 40, 50};
        // write() 二进制的数据
        ofs.write(reinterpret_cast<char *>(data), sizeof(data));
        std::cout << "写入二进制文件成功" << std::endl;
    } else
        // 读取失败输出设置
        std::cerr << "无法打开文件" << std::endl;

    ofs.close();
}

/* 读取二进制文件数据 */
void bin_read() {
    string file = path + "binary_data.dat";
    std::ifstream ifs(file.c_str(), std::ios::binary);
    if (ifs.is_open()) {
        int data[5];
        // read 读取二进制文件
        ifs.read(reinterpret_cast<char *>(data), sizeof(data));
        for (int i: data)
            std::cout << i << " ";
        std::cout << std::endl;
    } else
        std::cerr << "无法打开文件" << std::endl;
    ifs.close();
}


void bin_write_demo() {
    string file = "mydemo.dat";

    ofstream out(path + file, ios_base::binary | ios_base::out);
    if (out.is_open()) {
        mydemo p1{"momo", 120, true};
        mydemo p2{"white", 20, false};
        mydemo p3{"monster", 220, true};

        vector<mydemo> mydemoList {p1, p2, p3};

        for (auto & i : mydemoList)
            out.write(reinterpret_cast<char *>(&i), sizeof i);
        cout << "Completed\n";
        out.close();
    } else { cerr << "File Not Found!\n"; }
}

void bin_read_mydemo() {
    string file = "mydemo.dat";
    ifstream ifs(path + file, ios_base::binary | ios_base::in);

    if (ifs.is_open()) {
        mydemo tmp;
        while (ifs.read(reinterpret_cast<char *> (&tmp), sizeof tmp)) {
            cout << "name = " << tmp.name << "\nage = " << tmp.age
                 << "\ngender = " << ( tmp.gender ? "male\n" : "female\n");
            cout << setfill('-') << setw(20) << "\n" << endl;
        }
    } else { cerr << "File Not Found!\n"; }
}

int main() {
//    bin_write_demo();
    bin_read_mydemo();
    return 0;
}
