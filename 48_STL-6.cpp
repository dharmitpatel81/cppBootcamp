#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
    list<int> mylist;

    mylist.push_back(1);
    mylist.push_back(2);

    for (int i = 3; i <= 10; ++i)
    {
        mylist.push_back(i);
    }

    for (auto i = begin(mylist); i != end(mylist); ++i)
    {
        cout << *i << " ";
    }

    cout << "\n";

    cout << mylist.front() << endl; // Return element placed at first position of the list
    cout << mylist.back() << endl;  // Return element placed at last position of the list

    // Remove element from the list
    mylist.pop_back();
    mylist.pop_front();

    // Reverse the list
    mylist.reverse();

    for (auto i : mylist)
    {
        cout << i << " ";
    }

    cout << endl;

    // Sorting the list
    mylist.sort();

    for (auto i : mylist)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}

/*

List in STL:

- Lists are sequence containers that allow non-contiguous memory allocation. 
- Traversing of the list is not really considered as very optimised and it is really expensive.
- In case of inserting the value or removing the value from the list is really quicker.
- It is mostly used in case when we create doubly linked list.

*/