// ? Lists are sequence containers that allow non-contiguous memory 
// ? allocation. As compared to the vector, the list has slow 
// ? traversal, but once a position has been found, insertion
// ? and deletion are quick (constant time). Normally, when we
// ? say a List, we talk  about a doubly linked list.
// ? For implementing a singly linked list,
// ? we use a forward_list.


#include <list>
#include <iostream>

int main()
{
    std::list<int> List;

    List.push_back(3);
    List.push_back(7);
    List.push_front(3);
    List.push_front(1);
    List.cbegin();
    while(!List.empty())
    {
        std::cout << List.front() << " ";
        List.pop_front();
    }
}

// * front() – Returns the value of the first element in the list.
// * back() – Returns the value of the last element in the list.
// * push_front() – Adds a new element ‘g’ at the beginning of the list.
// * push_back() – Adds a new element ‘g’ at the end of the list.
// * pop_front() – Removes the first element of the list, and reduces the size of the list by 1.
// * pop_back() – Removes the last element of the list, and reduces the size of the list by 1.
// * insert() – Inserts new elements in the list before the element at a specified position.
// * size() – Returns the number of elements in the list.
// * begin() – begin() function returns an iterator pointing to the first element of the list.
// * end() – end() function returns an iterator pointing to the theoretical last element which follows the last element.