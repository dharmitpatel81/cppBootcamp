#include <iostream>
// #define NULL 0
using namespace std;

void printval(int a)
{
    printf("Integer value is %d \n", a);
}

void printval(double a)
{
    printf("Double value is %f \n", a);
}

void printval(int *a)
{
    printf("Pointer value is %p \n", a);
}

int main()
{
    printval(5);
    printval(5.3);
    // printval(NULL); // Ambiguous
    printval(nullptr);

    return 0;
}

/*
- Be extra cautious while using NULL in C++ bcz it's ambiguous during function overloading [ Warning ]

- It is always a good practice to assign the pointer NULL to a pointer variable in case you do not have exact address to be assigned. This is done at the time of variable declaration. A pointer that is assigned NULL is called a null pointer.

- The NULL pointer is a constant with a value of zero defined in several standard libraries, including iostream.

- nullptr is a pointer that points towards the real NULL and provides type safety because it can be implicitly converted to any pointer type but not to integer types like NULL.    

- NULL is still valid in C++ (for backward compatibility), it's generally recommended to use nullptr in modern C++ code.

*/