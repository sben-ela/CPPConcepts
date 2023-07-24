#include <iostream>

class MyClass {
public:
    void Function1() {
        std::cout << "Function1 called" << std::endl;
    }

    void Function2() {
        std::cout << "Function2 called" << std::endl;
    }
};

int main() {
    MyClass obj;
    typedef void (MyClass::*FunctionPtr)();
    FunctionPtr array[2] = { &MyClass::Function1, &MyClass::Function2 };

    (obj.*(array[0]))(); // Calling the first member function through the pointer array

    return 0;
}