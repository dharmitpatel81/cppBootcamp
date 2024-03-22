#include <iostream>
using namespace std;

int getTwo()
{
    return 2;
}

void interesting()
{
    puts("I'm Interesting!");
}

int main()
{
    int whatIGot = getTwo(); // Here we called the func directly
    cout << whatIGot << endl;

    void (*pointsToInteresting)() = interesting; // I don't want to run a func right now
    pointsToInteresting();
    (*pointsToInteresting)();
    return 0;
}

/**
- When a pointer points towards a function, it gets more capabilities, like Superman, and we can even run that function based on pointers.

- Pointer needs to be of the same datatype in which we are holding the function return value.

- (*pointsToInteresting) -> Always wrap up like this when work with pointer
*/