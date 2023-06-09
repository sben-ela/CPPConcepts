#include <iostream>

void Hello() {
    std::cout << "Hello from Hello!" << std::endl;
}
 
namespace Salah
{
    namespace position{
        double  x;
        double  y;
    }
    namespace direction{
        double  dir_x;
        double  dir_y;
    }
    namespace functions{
        void Hello() {
            std::cout << "Hello from namespace!" << std::endl;
            position::x = 10;
            position::y = 20;
            direction::dir_x = -1;
            direction::dir_y = 1;
        }
    }
}

int main() {

    Hello();
    Salah::functions::Hello();
    std::cout << Salah::position::x << std::endl;
    std::cout << Salah::position::y << std::endl;
    std::cout << Salah::direction::dir_x << std::endl;
    std::cout << Salah::direction::dir_y << std::endl;
    return 0;
}
