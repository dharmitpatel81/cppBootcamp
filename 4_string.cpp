#include <iostream>
#include <string>
using namespace std;

int main()
{
    string my_color;
    cout << "Enter your favourite color: \n";
    getline(cin, my_color);
    cout << "Hey " << my_color << " is my favourite too!" << endl;
    return 0;
}

/*
- Primitive datatype: its present in first release of C++
- cin take inputs in one character
- getline() is a standard library function that is used to read a string or a line from an input stream. 
- C++ uses a marker, the null character, denoted by '\0', to indicate the end of the string.
*/