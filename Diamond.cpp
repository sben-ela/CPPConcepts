#include <iostream>


class person
{
    public :
        void info()
        {
            std::cout << "person" << std::endl;
        }
};


class Mother : virtual public person
{

};

class Father : virtual public person
{

};

class child : public Father, public Mother
{

};

int main()
{
    child A;

    A.info();
    return 0;
}