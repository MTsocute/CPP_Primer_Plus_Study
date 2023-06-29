//
// Created by Momo on 2023/6/29.
//
#include <iostream>
#include <cctype>

using namespace std;

int space_number = 0;
int char_number = 0;
int punc_number = 0;
int digits = 0;


// 统计输入的内容中有多少空白、字符、符号、数字
void count_elements() {
    cout << "plz int words (use ctrl-D to end input): " << endl;
    char temp;
    while ((temp = (char )cin.get()) != EOF) {
        // cout.put(temp);

        if(isdigit(temp))
            digits++;
        else if (isalpha(temp))
            char_number++;
        else if (isspace(temp))
            space_number++;
        else if (ispunct(temp))
            punc_number++;
        else
            continue;
    }
}

// 把统计好的数据输出出来
void analysis_data() {
    cout << "Number of space " << space_number << endl;
    cout << "Number of digits " << digits << endl;
    cout << "Number of punctuation mark " << punc_number << endl;
    cout << "Number of character " << char_number << endl;
}


int main() {
    count_elements();
    analysis_data();
    return 0;
}