// The insert function is overloaded to work on multiple cases which are as follows:

// 1 : Insert an element at the given index.
// 2 : Insert an element multiple times.
// 3 : Insert a range of elements at the given index.



#include <iostream>
#include <vector>

int main()
{
    //  ! 1. Insert an Element at the Given Index
    {
        std::cout << "1. Insert an Element at the Given Index : " << std::endl;
        std::vector<int> Vec;

        Vec.push_back(1);
        Vec.push_back(3);

        std::cout << "vector before inserting 2 at position 1" << std::endl;
        std::vector<int>::iterator it = Vec.begin();
        while(it != Vec.end())
        {
            std::cout << *it << " ";
            it++;
        }
        std::cout << std::endl;
        Vec.insert(Vec.begin() + 1, 2);
        std::cout << "vector after inserting 2 at position 1" << std::endl;;
        it = Vec.begin();
        while(it != Vec.end())
        {
            std::cout << *it << " ";
            it++;
        }
        std::cout << std::endl << std::endl;
    }
    //  ! 2. Insert Multiple Elements at Given Index
    {
        std::cout << "2. Insert Multiple Elements at Given Index : " << std::endl;
        std::vector<int> Vec;

        Vec.push_back(1);
        Vec.push_back(3);

        std::cout << "vector before inserting 2, 4 times starting at position 1" << std::endl;
        std::vector<int>::iterator it = Vec.begin();
        while(it != Vec.end())
        {
            std::cout << *it << " ";
            it++;
        }
        std::cout << std::endl;
        Vec.insert(Vec.begin() + 1, 4, 2);
        std::cout << "vector after inserting 2, 4 times starting at position 1" << std::endl;;
        it = Vec.begin();
        while(it != Vec.end())
        {
            std::cout << *it << " ";
            it++;
        }
        std::cout << std::endl<< std::endl;
    }

    //  ! 3. Insert the Range of Elements at Given Index
    {
        std::cout << "3. Insert the Range of Elements at Given Index : " << std::endl;
        std::vector<int> Vec;
        std::vector<int> temp;

        Vec.push_back(1);
        Vec.push_back(3);

        temp.push_back(2);
        temp.push_back(2);
        temp.push_back(2);
        std::cout << "Original vector  " << std::endl;
        std::vector<int>::iterator it = Vec.begin();
        while(it != Vec.end())
        {
            std::cout << *it << " ";
            it++;
        }
        std::cout << std::endl;
        Vec.insert(Vec.begin() + 1, temp.begin(), temp.end());
        std::cout << "Vector after Inserting the portion of temp vector in original vector" << std::endl;;
        it = Vec.begin();
        while(it != Vec.end())
        {
            std::cout << *it << " ";
            it++;
        }
    }

}
