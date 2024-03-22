#include <iostream>
#include <string>
using namespace std;

// Optimised way: Here, instead of copying we directly move the value by creating refernces.
void swap(int &a, int &b)
{
    int temp = move(a);
    a = move(b);
    b = move(temp);
}

string printMe()
{
    return "I am print!";
}

int main()
{
    int a = 3;
    int b = 4;

    swap(a, b);

    cout << "A: " << a << endl;
    cout << "B: " << b << endl;

    // Here, we are copying reference of printMe() inside s
    string s = printMe();

    // Optimised way : Using move-semantics, we are not copying any reference, its directly referencing to printMe()
    string &&ss = printMe();

    cout << s << endl;
    cout << ss << endl;

    return 0;
}

/*
NUTSHELL:
- Move Sematics is a part of std
- It helps us in memory optimization

------------------------------------------------------------------------------------------------------

References:

In C++ there are two types of references-

1. lvalue reference:
    - An lvalue is an expression that will appear on the left-hand side of an assignment.
    - Simply, a variable or object that has a name and memory address.
    - It uses one ampersand (&).

2. rvalue reference:
    - An rvalue is an expression that will appear only on the right-hand side of an assignment.
    - A variable or object has only a memory address (temporary objects).
    - It uses two ampersands (&&).


Example:
        int a = 10;

        # Declaring lvalue reference
        int& lref = a;

        # Declaring rvalue reference
        int&& rref = 20;

==> Move Constructor And Semantics:

In C++, move semantics refer to a feature introduced in C++11 that allows the efficient transfer of resources (such as memory ownership) from one object to another without unnecessary copying. This feature is particularly useful for improving performance when dealing with expensive-to-copy objects, like large containers or objects managing external resources.

- std::move() is a function used to convert an lvalue reference into the rvalue reference. Used to move the resources from a source object i.e. for efficient transfer of resources from one object to another.

- The copy constructor uses the lvalue references which are marked with one ampersand (&) while the move constructor uses the rvalue references are marked with two ampersands (&&).

- Move constructors typically “steal” the resource of the source (original) object rather than making several copies of them, and leaves the source object in a “valid but unspecified state”.

*/