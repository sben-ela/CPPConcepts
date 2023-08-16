/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   const.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-ela <sben-ela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:00:23 by sben-ela          #+#    #+#             */
/*   Updated: 2023/08/16 10:37:38 by sben-ela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
using namespace std;

class Complex {
private:
    int real;

public:
    Complex(int r)
    {
        real = r;
    }

// ! The const keword makes the operator take an int or a complex
    void operator=(const Complex& C)
    {
        real = C.real;
    }

    void print() { 
        cout << real << endl;
    }
};

int main()
{
    Complex a(1);
    Complex b(2);

    a = 3.5; // Implicit conversion from double to int occurs here
    a.print();
    b.print();
    return 0;
}

// ? Assignment from another Complex object:

// If you have another Complex object, say D, you can use the assignment 
// operator like this:

// {
//      Complex D(10);
//      Complex E(20);
//      D = E; // This works fine because E is a Complex object
// }


// ? Assignment from an int:

// The behavior of assigning an int to a Complex object depends on whether
// you have a constructor that can accept an int. If you have a constructor
// like Complex(int r), the assignment will work due to implicit conversion.
// The assignment operator won't be used in this case.

// {
//      Complex F(5);
//      int num = 15;
//      F = num; // This will work if there's a constructor Complex(int r)
// }


