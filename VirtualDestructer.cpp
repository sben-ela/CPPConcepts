#include <iostream> 
using namespace std;



//  ? Deleting a derived class object using a pointer of base class type that has a non-virtual
//  ? destructor results in undefined behavior. To correct this situation, the base class 
//  ? should be defined with a virtual destructor.

class Super
{ 
        int x;
    public:
        virtual void funBase() 
        { 
            cout << "Super function" << std::endl; 
        }
        virtual  ~Super(){
            std::cout << "super deleted" << std::endl; 
        }
};


class Sub: public Super
{
        int y;
        int *a;
    public :
        Sub(){
            a = new int[4];
         }
        void funBase() 
        { 
            cout << "sub function" << std::endl; 
        }
        ~Sub(){
            delete a;
            std::cout << "Sub deleted" << std::endl;
        }
};

int main()
{
    Super* ptr = new Sub();
    delete ptr;
    // ! If the destructor is not Virtual, the program will perform a memory leak
    // system("leaks a.out");
}

