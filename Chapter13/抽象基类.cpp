//
// Created by Momo on 2023/7/30.
//

#include "抽象基类.h"

inline void Shape::displayInfo() {
    std::cout << "This is a shape." << std::endl;
}

inline void Circle::draw() const {
    std::cout << "Drawing a circle." << std::endl;
}

Shape::~Shape() {
    cout << "ABC De!\n";
}

Circle::~Circle() {
    cout <<"Cir De!\n";
}

void Circle::say_sth() const {
    cout << "From Circle!\n";
}