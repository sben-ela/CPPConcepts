#include <iostream>
#include <vector>
#include <iterator> 

int main()
{
    std::vector<int> ar;
    ar.push_back(1);
    ar.push_back(2);

    std::vector<int>::iterator ptr(ar.begin());
    while (ptr != ar.end())
    {
        std::cout << *ptr << std::endl;
        ptr++;
    }
}

// ! begin implementation :
// ? The begin function return an iterator of the first element 
/*
    ? typename Vector<T>::iterator Vector<T>::begin()
    ? { 	
    ?   return Vector<T>::iterator(&_elements[0]); call the constructer of the iterator class
    ? }
*/

// ! iterator implementation  :

// * template <class T>
// * class   vector<T>::iterator
// *{

//  *    public:
// 	*        iterator(T* p)
// 	*	        :_curr(p)
// 	*       {}

// 	*        iterator& operator++()
// 	*       {
// 	*	        _curr++;
// 	*	        return *this;
// 	*       }

// 	*        iterator& operator--()
// 	*       {
// 	*	        _curr--;
// 	*	        return *this;
// 	*       }

// 	*        T& operator*()
// 	*       {
// 	*	        return *_curr;
// 	*        }

// 	*       bool operator==(const iterator& b) const
// 	*        {
// 	*	        return *_curr == *b._curr;
// 	*       }

// 	*        bool operator!=(const iterator& b) const
// 	*       {
// 	*	        return *_curr != *b._curr;
// 	*       }

//   *   private:
//    *      T* _curr;

// *};
