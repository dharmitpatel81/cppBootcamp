#include <iostream>
using namespace std;

// Preprocessor Constant
#define PI 3.14

// Let's design some feature for MS Ofc
enum MsOffice : uint8_t
{
    BOLD = 0,
    ITALICS = 2,
    UNDERLINE = 4,
    COSSED

};

int main()
{
    int myAttribute = ITALICS;
    cout << myAttribute << endl;

    return 0;
}

/*
- An enumeration is a user-defined data type that consists of integral constants. To define an enumeration, keywordenum is used.
- By default, BOLD is 0, ITALIC  is 1 and so on. You can change the default value of an enum element during declaration (if necessary).
- Great alternative to preprocessor constants
- In C++ 11, enums were converted into the class
*/