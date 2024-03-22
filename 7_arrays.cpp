#include <iostream>
using namespace std;

int main()
{
    // Advance style
    int integer_array[4] = {1, 2, 3, 4};
    cout << integer_array << endl; // return memory address of first array element
    cout << integer_array[0] << endl;

    // Common style
    int another_array[4];
    another_array[0] = 9;
    another_array[1] = 19;

    cout << another_array[0] << endl;
    cout << another_array[2] << endl; // return garbage value

    *another_array = 29; // Another way to update values
    cout << another_array[0] << endl;

    cout << another_array[1] << endl;
    int *another_ptr = another_array;
    another_ptr++; // incrementing pointer
    *another_ptr = 209;
    cout << another_array[1] << endl;

    return 0;
}

/*
- An array is a continuous memory allocation that is used to store multiple values in a single variable instead of declaring separate variables for each value.

- When a variable is declared but not initialized -> default value of that variable is whatever (garbage) value happens to already be in that memory address! It could be a positive or negative number or zero.

- Using an array name with the subscript operator. This converts the array name to a pointer to the first element and then performs the equivalent of pointer arithmetic followed by dereferencing.

- *another_ptr mean array_pointer
*/