#include <iostream>

class Shape {
public:
    virtual void draw() {
        std::cout << "Drawing a Shape." << std::endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a Circle." << std::endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a Square." << std::endl;
    }
};

void    do_smt_shapes(Shape* sptr)
{
    sptr->draw();
}

int main() {
    Shape* shapePtr;

    Circle circle;
    Square square;

    shapePtr = &circle;
    shapePtr->draw();  // Calls the draw() method of Circle

    shapePtr = &square;
    shapePtr->draw();  // Calls the draw() method of Square

    return 0;
}
