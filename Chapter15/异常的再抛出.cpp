//
// Created by Momo on 2023/8/11.
//

#include "异常的再抛出.h"

int main() {
    double f = 1.2;
    try {
        // 这个函数内部本身是有 catch() 的
        // 如果内部捕获了错误，外面的捕获会抓不到内部的错误
        CountTax(0);

//        f = Devide(3, 0);   // 内部错误交给外部处理的正常报错
        cout << "end of try block" << endl;
    }
    // 处理自定义类型的报错
    catch (CException & e) {
        cout << e.msg << endl;
    }
    catch (int err) {
        cout << "会报错的函数已经内部消化了，所以这部分不会有用\n";
    }
    catch (string & s) {
        cout << "Outside Error:\n" << s << endl;
    }

//    cout << "f = " << f << endl;
    cout << "finished" << endl;
    return 0;
}