#include <iostream>

#include <iostream>

class Base {
public:
     void doSomething() { /* Base implementation */ }
};

class Derived : public Base {
public:
	int *x;
	int y;
	int z;
    void doSomething() { /* Derived implementation */ }
    void doSpecialThing() { /* Special action for Derived */ }
};

int main() {
    Base* basePtr = new Base;

    // Attempt to perform a dynamic cast
    Derived* derivedPtr = (Derived *)basePtr;

    if (derivedPtr)
    {
        std::cout << "Cast successful" << std::endl;
		std::cout << derivedPtr->x << std::endl;
        derivedPtr->doSpecialThing();
    }
    else
    {
        std::cout << "Cast failed" << std::endl;
    }

    delete basePtr;
    return 0;
}
