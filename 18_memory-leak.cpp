#include <iostream>
using namespace std;

int main()
{
    int *my_ptr;

    try
    {
        // dynamically allocate memory for an int array
        my_ptr = new int[100];
        cout << "Memory space allocated! \n";
    }
    catch (...)
    {
        cout << "Failed in allocating memory! \n";
    }

    // ptr memory is released
    delete[] my_ptr;

    return 0;
}

/*
- In other programming languages such as Java and Python, the compiler automatically manages the memories allocated to variables. But this is not the case in C++.

- C++ allows us to allocate the memory of a variable or an array in run time. This is known as dynamic memory allocation.

- We can allocate and then deallocate memory dynamically using the new and delete operators respectively.

- In case of deallocate:
    if array : delete [] my_ptr;
    if variable : delete my_ptr;

- Avoid cout stmt bcz of << overwrittern to left shift || Prefer puts() or printf()

*/