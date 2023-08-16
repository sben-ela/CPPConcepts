#include <iostream>

// C++ program to demonstrate what is object slicing
class Base {
	int x, y;
};

class Derived : public Base {
	int z, w;
};

int main()
{
	Derived d;

	// Object Slicing,
	// z and w of d are sliced off
	Base b = d;
}


// When a derived class object is assigned to a base class object in C++, 
// the derived class object’s extra attributes are sliced off (not considered) 
// to generate the base class object; and this whole process is termed object slicing. 
// In simple words, when extra components of a derived class are sliced or not used 
// and the priority is given to the base class’s object this is termed object slicing. 

// In C++, a derived class object can be assigned to a base class object, 
// but the other way is not possible. To tackle this slicing problem
//  we can use a dynamic pointer.

// Moreover, Object slicing happens when a derived class object is assigned
// to a base class object, and additional attributes of a derived
// class object are sliced off to form the base class object.

// https://media.geeksforgeeks.org/wp-content/uploads/20220520115535/objectslicing.jpg