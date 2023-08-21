// * empty() – Returns whether the stack is empty – Time Complexity : O(1) 
// * size() – Returns the size of the stack – Time Complexity : O(1) 
// * top() – Returns a reference to the top most element of the stack – Time Complexity : O(1) 
// * push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1) 
// * pop() – Deletes the most recent entered element of the stack – Time Complexity : O(1) 



#include <iostream>
#include <stack>

int main()
{
    std::stack<int> Stack;

    Stack.push(7);
    Stack.push(3);
    Stack.push(3);
    Stack.push(1);
    Stack.push(7);


    std::cout << "Stack Size : " << Stack.size() << std::endl;
    std::cout << "Delete The last entered element" << std::endl;
    Stack.pop();
    std::cout << "Stack Size : " << Stack.size() << std::endl;

    while (!Stack.empty())
    {
        std::cout << Stack.top() << " ";
        Stack.pop();
    }

    std::cout << std::endl << "L I F O" << std::endl;   
}

// * Stacks are a type of container adaptors with LIFO(Last In First Out)
// * type of working, where a new element is added at one end (top)
// * and an element is removed from that end only. Stack uses
// * an encapsulated object of either vectoror deque 
// * (by default) or list (sequential container class)
// * as its underlying container, providing
// * a specific set of member functions
// * to access its elements.