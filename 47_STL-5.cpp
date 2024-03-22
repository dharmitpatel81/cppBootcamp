#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    // Vector initialization
    vector<int> nums;

    // Another Way of Vector initialization
    vector<string> heros{"batman", "flash", "superman", "robin"};

    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(8);

    for (int i = 0; i < 5; ++i)
    {
        nums.push_back(i);
    }

    cout << nums.size() << endl; // Returns the number of elements in the vector

    cout << nums.capacity() << endl; // Returns the total number of elements that the vector can hold before needing to allocate more memory.

    cout << nums.max_size() << endl; // Returns the size() of the largest possible vector

    cout << nums.empty() << endl; // Return 0 or 1

    cout << heros.at(1) << endl; // To access value using index

    for (auto i = begin(nums); i != end(nums); ++i)
    {
        cout << *i << " ";
    }

    return 0;
}

/*

Vector in STL:

- When a vector is created, its capacity is typically set to some initial value (which can be specified in the constructor), and its size is initially zero. As elements are added to the vector using the `push_back()` member function, the vector's size increases. If the size of the vector reaches its capacity, the vector may need to be reallocated to a larger block of memory to accommodate additional elements. This can be an expensive operation, as it involves copying all of the existing elements to the new memory block.

*/