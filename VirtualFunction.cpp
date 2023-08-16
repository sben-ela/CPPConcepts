#include <iostream>
using namespace std;
 
class base {
public:
    void virtual print() {
        cout << "print base class" << std::endl;
        }
};
 
class derived : public base {
public:
    void print(){
        cout << "print derived class" << std::endl;
    }
};
 
int main()
{
    base* bptr;
    derived d;
    bptr = &d;
    // if the base class Does not have this function virtual its function will be called
    bptr->print();
    return 0;
}

// ? Note: If we have created a virtual function in the base class and it is being overridden
// ? in the derived class then we don’t need a virtual keyword in the derived class,
// ? functions are automatically considered virtual functions in the derived class

