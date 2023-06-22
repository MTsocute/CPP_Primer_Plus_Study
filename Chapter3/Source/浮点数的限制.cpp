#include <iostream>
#include <cfloat>

int main() {
    // 浮点数的上限值
    std::cout << "最大浮点数：" << FLT_MAX << std::endl;
    std::cout << "最大双精度浮点数：" << DBL_MAX << std::endl;
    std::cout << "最大扩展双精度浮点数：" << LDBL_MAX << std::endl;

    // 浮点数的下限值
    std::cout << "最小正浮点数：" << FLT_MIN << std::endl;
    std::cout << "最小正双精度浮点数：" << DBL_MIN << std::endl;
    std::cout << "最小正扩展双精度浮点数：" << LDBL_MIN << std::endl;
    
    // 浮点数的大小
    std::cout << "浮点数的有效位数：" << FLT_DIG << std::endl;
    std::cout << "双精度浮点数的有效位数：" << DBL_DIG << std::endl;
    std::cout << "扩展双精度浮点数的有效位数：" << LDBL_DIG << std::endl;

    return 0;
}
