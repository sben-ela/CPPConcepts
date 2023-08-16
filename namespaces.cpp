#include <iostream>

void Hello() {
    std::cout << "Hello from Hello!" << std::endl;
}
 
namespace sben_ela
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
            std::cout << "Hello from sben-ela  namespace!" << std::endl;
            position::x = 10;
            position::y = 20;
            direction::dir_x = -1;
            direction::dir_y = 1;
        }
    }
}

int main() {

    Hello();
    sben_ela::functions::Hello();
    std::cout << sben_ela::position::x << std::endl;
    std::cout << sben_ela::position::y << std::endl;
    std::cout << sben_ela::direction::dir_x << std::endl;
    std::cout << sben_ela::direction::dir_y << std::endl;
    return 0;
}
