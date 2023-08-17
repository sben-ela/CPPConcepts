#include <iostream>
#include <set>


int main()
{
    std::set<int> Set;

    Set.insert(10);
    Set.insert(5);
    Set.insert(0);

    for (std::set<int>::iterator it = Set.begin(); it != Set.end(); it++)
    {
        std::cout << *it << std::endl;
    }
}


// * Sets are a type of associative container in which each element
// * has to be unique because the value of the element identifies it.
// * The values are stored in a specific sorted order i.e. either 
// * ascending or descending.