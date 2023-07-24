#include <iostream>


// class A
// {
//     private :
//         int x;
//         int y;
//     public :
//         A(){
//             x = 0;
//             y = 0;
//         }
//         A(int _x, int _y){
//             x = _x;
//             y = _y;
//         }
//         void display(){
//             std::cout << "x : " << x << "\t" <<  "y : " << y << std::endl;
//         }
//         // virtual void show()
//         // {
//         //     std::cout << "DYAL A" << std::endl;
//         // }
//         void    ply()
//         {
//             std::cout << "ply" << std::endl;
//         }
// };

// class B : public A
// { 
//     private :
//         int z;
//     public :
//         B(){
//             z = 0;
//         }
//         B(int x, int y, int z) : A(x, y){
//             this->z = z;
//         }
//         void ply()
//         {
//             std::cout << "LLWDWD" << std::endl;

//         }
//         void show()
//         {
//             ply();
//             std::cout << "z : " << z << std::endl;
//         }
// };

// int main()
// {
//     B b(0, 1, 2);
//     A *a = &b;

//     ((B *)a)->show();
//     return 0;
// }

class A
{
public:
    int x;
    virtual void show()
    {
        std::cout << "DYAL A" << std::endl;
    }
};

class B : public A
{
public:
    int y;
    void show()
    {
        std::cout << "show" << std::endl;
    }
};

int main()
{
    B b;

    b.y = 1145;
    b.x = 15;
    A *a = &b;

    // std::cout << a.x << std::endl;
    a->show();
    // std::cout << a.y << std::endl; // ! Error

    return 0;


}