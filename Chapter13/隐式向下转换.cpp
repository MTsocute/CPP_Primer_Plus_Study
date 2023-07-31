#include <iostream>

class Shape {
public:
    virtual void draw() const {
        std::cout << "Drawing a shape." << std::endl;
    }
};

class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a circle." << std::endl;
    }

    void circleSpecificFunction() const {
        std::cout << "Circle-specific function." << std::endl;
    }
};

int main() {
    // 创建一个基类指针并用派生类对象进行初始化
    Shape* shapePtr = new Circle();

    // 隐式向下转换：将基类指针转换为派生类指针
    Circle* circlePtr = (Circle* ) shapePtr;

    // 调用派生类的函数
    circlePtr->draw();  // 这里调用的是Circle类的draw()函数
    circlePtr->circleSpecificFunction();  // 这里调用的是Circle类特有的函数

    // 注意：隐式向下转换是不安全的，因为shapePtr实际上指向了Circle对象，
    // 但在这里我们将其当作Circle对象来使用。如果shapePtr不是指向Circle对象的，
    // 将会产生未定义的行为或运行时错误。

    // 最后别忘了释放内存
    delete shapePtr;

    return 0;
}
