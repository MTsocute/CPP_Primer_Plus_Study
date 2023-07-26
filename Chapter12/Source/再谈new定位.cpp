// placenew1.cpp  -- new, placement new, no delete
#include <iostream>
#include <string>
#include <new>

using namespace std;
const int BUF = 512;

class JustTesting {
private:
    string words;
    int number;
public:
    // 有默认参数的构造函数，相当于默认构造函数
    JustTesting(const string &s = "Just Testing", int n = 0) {
        words = s;
        number = n;
        cout << words << " constructed\n";
    }

    ~JustTesting() { cout << words << " destroyed\n"; }

    void Show() const { cout << words << ", " << number << endl; }
};

// 使用 new 定位在开辟好的内存中创建类的问题
void new_lac_problem() {
    char *buffer = new char[BUF];       // get a block of memory

    JustTesting *pc1, *pc2;

    // place JustTesting object in buffer by using new to locate
    pc1 = new(buffer) JustTesting;
    // place object on heap
    pc2 = new JustTesting("Heap1", 20);

    cout << "Memory block addresses:\n" << "buffer: "
         << (void *) buffer << "    heap: " << pc2 << endl;

    cout << "Memory contents:\n";
    cout << pc1 << ": ";
    pc1->Show();
    cout << pc2 << ": ";
    pc2->Show();

    cout << endl;

    JustTesting *pc3, *pc4;
    // 这个定位运算符覆盖了第一个定位运算符创建在里面的数据
    pc3 = new(buffer) JustTesting("Bad Idea", 6);
    pc4 = new JustTesting("Heap2", 10);
    cout << "Memory contents:\n";
    cout << pc3 << ": ";
    pc3->Show();
    cout << pc4 << ": ";
    pc4->Show();

    cout << endl;

    delete pc2;                          // free Heap1
    delete pc4;                          // free Heap2
    // 这个不会调用 new 定位分配内存的类的析构函数
    delete[] buffer;                     // free buffer
    cout << "Done\n";
}

// 内存管理和显式析构使用
void fix_new_loc_problem() {
    char *buffer = new char[BUF];       // get a block of memory

    JustTesting *pc1, *pc2;

    pc1 = new(buffer) JustTesting;      // place object in buffer
    pc2 = new JustTesting("Heap1", 20);  // place object on heap

    cout << "Memory block addresses:\n" << "buffer: "
         << (void *) buffer << "    heap: " << pc2 << endl;
    cout << "Memory contents:\n";
    cout << pc1 << ": ";
    pc1->Show();
    cout << pc2 << ": ";
    pc2->Show();

    JustTesting *pc3, *pc4;
    // 偏移字节存放多个类对象
    pc3 = new(buffer + sizeof(JustTesting))
            JustTesting("Better Idea", 6);
    pc4 = new JustTesting("Heap2", 10);

    cout << "Memory contents:\n";
    cout << pc3 << ": ";
    pc3->Show();
    cout << pc4 << ": ";
    pc4->Show();

    delete pc2;           // free Heap1
    delete pc4;           // free Heap2

    // 显式的使用指针指向类对象的析构函数
    pc3->~JustTesting();  // destroy object pointed to by pc3
    pc1->~JustTesting();  // destroy object pointed to by pc1
    delete[] buffer;     // free buffer
}


int main() {
    return 0;
}