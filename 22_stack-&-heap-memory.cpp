#include <iostream>

struct User
{
    const int id;
    int age;

    // default constructor
    User() : id(001), age(22) {}
};

int main()
{
    using namespace std;

    // stack
    int score = 100;
    User mike;

    // heap
    int *heap_score = new int;
    *heap_score = 200;

    User *nike = new User();

    delete heap_score;
    delete nike;

    return 0;
}

/*

- Stack has predefined size
- heap has predefined size but can grow on demand

- Both stack and heap memory are part of the actual memory block (RAM). The way they work fundamentally is actually the same, but the allocation part is a little different in both of these cases.

Memory Access:
    - Stack (Default one): Accessing memory on the stack is generally faster because the stack uses a simple mechanism of pushing and popping frames.

    - Heap: Accessing memory on the heap involves more complex operations, such as traversing pointers, and can be slower compared to accessing stack memory.

- C++ Professional prefer Visual Studio and CLion IDE for faster and efficient development.
*/