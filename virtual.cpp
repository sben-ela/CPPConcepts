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
 
    bptr->print();
    return 0;
}


