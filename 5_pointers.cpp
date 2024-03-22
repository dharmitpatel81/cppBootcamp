#include <iostream>
using namespace std;

int main()
{
    int life;
    life = 4;

    int card;
    card = 40;
    int my_card = card;

    int *myptr;
    myptr = &my_card;
    my_card = *myptr; // pointer dereference

    printf("Value of card is %d\n", my_card);
    printf("Value of pointer is %p\n", myptr);
    printf("Value of card is %d\n", my_card);

    return 0;
}

/*
- Pointer stores the memory address (HEX Value) as its value
- Able to deal with memory directly makes C++ powerful as well dangerous (difficult to handle, security issues, bugs, crashes)
- Dereferencing a pointer means accessing the value stored at the memory address pointed to by that pointer.
- Use format specifier :- %d for int, %p for pointer
*/