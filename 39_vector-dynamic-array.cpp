#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Corners
{
    float a, b, c, d;
};

// Operator overriding : Streaming Operator
ostream &operator<<(ostream &stream, const Corners &corner)
{
    stream << corner.a << " " << corner.b << " " << corner.c << " " << corner.d;
    return stream;
}

int main()
{
    vector<int> inty;

    inty.push_back(2);
    inty.push_back(3);
    inty.push_back(4);
    inty.push_back(5);

    // Advance way
    for (auto i = inty.begin(); i != inty.end(); ++i)
    {
        cout << *i << endl;
    }

    vector<Corners> corners;

    corners.push_back({1, 2, 3, 4});
    corners.push_back({5, 6, 7, 8});

    // Advance way: First override << operator to stream set of value
    for (int i = 0; i < corners.size(); ++i)
    {
        cout << corners[i] << endl;
    }

    return 0;
}

/*

Vectors are the same as dynamic arrays with the ability to resize themselves automatically when an element is inserted or deleted, with their storage being handled automatically by the container. 

Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators.

It also known as ArrayList and its size can be grown upto any level.

- begin() gives reference of start location
- end() gives reference of end location
- size() gives size of the vector

NOTE: 
    A vector is less efficient in terms of memory. An array is more efficient; it occupies less memory than a vector.
*/
