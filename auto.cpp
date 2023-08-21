// C++ program to demonstrate working of auto
// and type inference

#include <iostream>
using namespace std;


int main()
{
	auto x = 4;
	auto y = 3.37;
	auto z = 3.37f;
	auto c = 'a';
	auto ptr = &x;
    int a = 0;
	auto pptr = &ptr;
	cout << typeid(x).name() << endl
		<< typeid(y).name() << endl
		<< typeid(z).name() << endl
		<< typeid(c).name() << endl
		<< typeid(ptr).name() << endl
		<< typeid(pptr).name() << endl;

	return (0);
}
