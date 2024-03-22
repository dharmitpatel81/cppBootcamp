#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int numbers[6] = {3, 2, 6, 4, 7, 9};

    cout << "Unsorted values: " << endl;

    for (int n : numbers)
    {
        cout << n << " ";
    }

    cout << "\n";

    /*Here we take two parameters, the start of the iterator and the length n upto which we want the iteraor to be sorted*/
    sort(numbers, numbers + 6);

    /* Parameters:  __first – An iterator,  __last – Another iterator, __val – The search term */
    // binary_search(numbers, numbers + 6, 7);

    if (binary_search(numbers, numbers + 6, 7))
    {
        cout << "Number found there!" << endl;
    }
    else
    {
        cout << "Number not found there!" << endl;
    }

    cout << "Sorted values: " << endl;

    for (int n : numbers)
    {
        cout << n << " ";
    }

    return 0;
}

/*

Algorithms in STL:

- The containers are implemented as generic class templates, means that a container can be used to hold different kind of objects and they are dynamic in nature!

- STL provide different types of algorithms that can be implemented upon any of the container with the help of iterators. Thus, now we don’t have to define complex algorithm instead we just use the built in functions provided by the algorithm library in STL.

- Searching method only works on sorted arrays.

- Behind the scenes of generic implementation, binary search works on searching, and quick sort is for sorting.

*/