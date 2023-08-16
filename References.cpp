#include <iostream>
using namespace std;

int main()
{
	int x = 10;

	// ref is a reference to x.
	int& ref = x;

	// Value of x is now changed to 20
	ref = 20;
	cout << "x = " << x << '\n';

	// Value of x is now changed to 30
	x = 30;
	cout << "ref = " << ref << '\n';

	return 0;
}


// When a variable is declared as a reference, it becomes an alternative name
// for an existing variable. A variable can be declared as a reference by 
// putting ‘&’ in the declaration. 

// Also, we can define a reference variable as a type of variable that can act
// as a reference to another variable. ‘&’ is used for signifying the address 
// of a variable or any memory. Variables associated with reference 
// variables can be accessed either by its name or by the
// reference variable associated with it.