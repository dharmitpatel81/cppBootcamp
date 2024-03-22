// C++ Function Template

#include <iostream>
using namespace std;

void lifeUp(int &life)
{
    ++life;
}

// created new empty datatype T
template <typename T>

T addme(T a, T b)
{
    return a + b;
}

int main()
{
    int life = 3;
    lifeUp(life);
    cout << life << endl;

    int v1 = 4;
    int v2 = 5;
    float v3 = 5.6;
    float v4 = 7.5;

    cout << addme(v1, v2) << endl;
    cout << addme(v3, v4) << endl;

    return 0;
}

/**
- Templates are powerful features of C++ which allows us to write generic programs. It is mostly used in competitive programming and white board interviews.

- A function template starts with the keyword template followed by template parameter(s) inside <> which is followed by the function definition.

- We can create a single function to work with different data types by using a template.

    Ex:
        template <typename T>
        T functionName(T parameter1, T parameter2, ...) {
            // code here!
        }

        In the above code, T is a template argument that accepts different data types (int, float, etc.), and typename is a keyword.

*/