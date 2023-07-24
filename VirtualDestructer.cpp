#include <iostream> 
using namespace std;


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



//
/*/
    iline func();//1
    iline dfunc();//1

*/
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
    // system("leaks a.out");
}

