/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Diamond.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-ela <sben-ela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 09:58:14 by sben-ela          #+#    #+#             */
/*   Updated: 2023/08/16 10:00:11 by sben-ela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




// What is Virtual Inheritance?
// In C++, a class can inherit from multiple classes which s commonly referred 
// as multiple inheritance. But this can cause problems sometimes,
// as you can have multiple instances of the base class.
// To tackle this problem, C++ uses a technique which 
// ensures only one instance of a base class is present. 
// hat technique is referred as virtual inheritance.


#include <iostream>


class person
{
    public :
        int a;
};

// ! The inheritance must be Virtual To handle The ambiguous probleme 
class Mother : virtual  public person
{

    public :
        void mother()
        {
            std::cout << " Mather : " << a << std::endl;
        }
};

// ! The inheritance must be Virtual To handle The ambiguous probleme 
class Father :  virtual public  person
{
        public :
        void father()
        {
            std::cout << " Father : " << a << std::endl;
        }
};

class child : public Father, public Mother
{

};

int main()
{
    
    child obj;

    obj.a = 42;
    std::cout << obj.a << std::endl;
    return 0;
}




// ! This is the error :
// Diamond.cpp:40:9: error: non-static member 'a' found in multiple base-class subobjects of type 'person':
//     class child -> class Father -> class person
//     class child -> class Mother -> class person
//     obj.a = 0;
//         ^
// Diamond.cpp:7:13: note: member found by ambiguous name lookup
//         int a;
//             ^
// 1 error generated.
