/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConstintConstructer.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-ela <sben-ela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:00:20 by sben-ela          #+#    #+#             */
/*   Updated: 2023/08/16 11:02:01 by sben-ela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
using namespace std;

class Test
{
    public:
    Test(const Test &t)
    {

    }
    Test()
    {
        
    }
};

Test fun()
{
	cout << "fun() Called\n";
	Test t;
	return t;
}

int main()
{
	Test t2 = fun();
	return 0;
}


// ? https://www.geeksforgeeks.org/copy-constructor-argument-const/