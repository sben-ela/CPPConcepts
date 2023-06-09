#include <iostream>

int a = 5;

namespace Salah
{
    int var = 100;
}


int main()
{
    std::cout << "the var in the Salah namespace : " << Salah::var << std::endl;
    {
        ::a = 8;
        std::cout <<"we are in the inner : "<< ::a << std::endl;
    }
    ::a = 2;
    std::cout <<"we are in the external  : "<< ::a << std::endl;
}
