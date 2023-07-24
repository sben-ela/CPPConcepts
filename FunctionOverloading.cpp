#include <iostream>
using namespace std;

class A {

public:
    int i;
    
    // this function is performing the addition of  two Integer value
    int Add(int num1, int num2)    
    {
        return num1 + num2;     
    }

    // this function is performing the addition of three Integer value
    int Add(int num1, int num2, int num3) 
    {              

        return num1 + num2 + num3;        
    }  
};


int main()
{
    A obj;

    cout << obj.Add(2, 5) << endl;
    cout << obj.Add(8, 2, 1) << endl;
}



// ? Polymprphism :  https://www.scaler.com/topics/types-of-polymorphism-in-cpp/