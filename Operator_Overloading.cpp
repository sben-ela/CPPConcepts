#include <iostream>
using namespace std;

class Complex {
private:
	int	real;
	int	imag;

public:
	Complex(int r = 0, int i = 0)
	{
		real = r;
		imag = i;
	}

	Complex operator+(Complex const& obj)
	{
		Complex res;
		res.real = real + obj.real;
		res.imag = imag + obj.imag;
		return res;
	}
	void print() const
	{
		cout << "real : " << real << "\timg : " << imag << '\n';
	}
};


int main()
{
	 Complex c1(10, 5), c2(2, 4);
	const Complex c3 = c1 + 4;
	c3.print();
}

// Operator overloading is a compile-time polymorphism. It is an idea of giving special meaning to an existing operator in C++ without changing its original meaning.

// Normal Functions:
// Normal functions are regular functions defined using the function syntax with a name and parameters.
// They are called using the function name followed by parentheses and arguments.
// Normal functions can have any name, and they are not associated with any specific operator.
// They can perform a variety of tasks, from simple arithmetic calculations to complex algorithms.
// Normal functions can be overloaded, which means you can define multiple functions with the same name but different parameter lists.
// Examples of normal functions: int add(int a, int b), void printMessage(std::string message)


// Operator Functions:
// Operator functions are special functions that define the behavior of operators when applied to user-defined types (classes or structures).
// They are also known as overloaded operators because they allow you to redefine the behavior of operators beyond their default functionality.
// Operator functions are defined using a special syntax. For example, to overload the addition operator +, you would define a function named operator+ within the class or structure.
// Operator functions are invoked implicitly when an operator is used with objects of the corresponding class or structure.
// Operator functions can be defined as member functions or non-member functions, depending on the specific operator being overloaded.
// Examples of operator functions: MyClass operator+(const MyClass& lhs, const MyClass& rhs), bool operator==(const MyClass& lhs, const MyClass& rhs)


