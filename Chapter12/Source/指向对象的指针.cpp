// sayings2.cpp -- using pointers to objects
// compile with string1.cpp
#include <iostream>
#include <cstdlib>      // (or stdlib.h) for rand(), srand()
#include <ctime>        // (or time.h) for time()

const int ArSize = 10;
const int MaxLen = 81;

int main() {
    using namespace std;
    string name;
    cout << "Hi, what's your name?\n>> ";
    cin >> name;

    cout << name << ", please enter up to " << ArSize
         << " short sayings <empty line to quit>:\n";
    string sayings[ArSize];
    char temp[MaxLen];               // temporary string storage
    int i;
    for (i = 0; i < ArSize; i++) {
        cout << i + 1 << ": ";
        cin.get(temp, MaxLen);
        while (cin && cin.get() != '\n')
            continue;
        if (!cin || temp[0] == '\0') // empty line?
            break;                   // i not incremented
        else
            sayings[i] = temp;       // overloaded assignment
    }
    int total = i;                   // total # of lines read

    if (total > 0) {
        cout << "Here are your sayings:\n";
        for (i = 0; i < total; i++)
            cout << sayings[i] << "\n";

        // use pointers to keep track of shortest, first strings
        string *shortest = &sayings[0]; // initialize to first object
        string *first = &sayings[0];
        for (i = 1; i < total; i++) {
            if (sayings[i].length() < shortest->length())
                shortest = &sayings[i];
            if (sayings[i] < *first)     // compare values
                first = &sayings[i];     // assign address
        }
        cout << "Shortest saying:\n" << *shortest << endl;
        cout << "First alphabetically:\n" << *first << endl;

        /* 随机种子生成 */
        srand(time(nullptr));
        int choice = rand() % total; // pick index at random
        /* 随机种子生成 */

        // use new to create, initialize new String object
        string *favorite = new string(sayings[choice]);  // 指针类对象数组的指针
        cout << "My favorite saying:\n" << *favorite << endl;
        // 指针释放的是开辟的空间，假如内部变量是指向别的动态开辟空间的内存，就要交给析构释放空间
        delete favorite;
    } else
        cout << "Not much to say, eh?\n";
    cout << "Bye.\n";

    return 0;
}