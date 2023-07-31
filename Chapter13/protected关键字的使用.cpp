#include <iostream>

class Animal {
protected:  // 基类中使用的 protected
    int age;

public:
    Animal(int a) : age(a) {}

    void eat() {
        std::cout << "Animal is eating." << std::endl;
    }
};

class Dog : public Animal {
public:
    Dog(int a) : Animal(a) {}

    void bark() {
        std::cout << "Dog is barking." << std::endl;
    }

    void displayAge() {
        // 子类可以访问基类的 protected 成员
        std::cout << "Dog's age: " << Animal::age << " years old." << std::endl;
        std::cout << "Dog's age: " << age << " years old." << std::endl;
    }
};

int main() {
    Dog dog(3);
    dog.eat(); // 可以访问继承自基类的公有成员
    dog.bark(); // 可以访问派生类自己的公有成员
    dog.displayAge(); // 可以访问继承自基类的 protected 成员

    // 以下代码将产生编译错误，因为 age 是 Animal 类的 protected 成员，不能从类外部访问。
    // dog.age = 4;

    return 0;
}
