#include <iostream>
using namespace std;

template <typename T>

T getBigger(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    cout << getBigger(3, 5) << endl;
    cout << getBigger(3.5, 5.5) << endl;
    cout << getBigger('a', 'b') << endl;

    return 0;
}

/*
- Standard library means namespace standard.
- Standard Template Library is more about generic programming.

- In pseudocode, we just write abstract code.

- Generic Programming is implemented to increase the efficiency of the code. Generic Programming enables the programmer to write a general algorithm which will work with all data types. It eliminates the need to create different algorithms if the data type is an integer, string or a character.

- Generics can be implemented in C++ using Templates.

Why I love STL ?
- It takes generic programming to the next level
- We don't care about datatypes that much, but we care about only generic implementation.
- It provides inbuilt data structures and algorithms.
- Run-time polymorphism

NOTE:
    If we have to take advantage of the binary tree feature for searching and sorting, then go ahead with associative types, and if we want to use hashmap, go ahead with unordered associative types.

*/