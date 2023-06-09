#include <iostream>

int main()
{
    int a = 4;
    int b = 8;

    int *p = &a;
    p = &b;
    std::cout << "pointer : \n";
    std::cout <<  a << std::endl;
    std::cout << b << std::endl;
    
    int &ref = a;
    ref = b;
    std::cout << "reference : \n";
    std::cout <<  a << std::endl;
    std::cout << b << std::endl;
}