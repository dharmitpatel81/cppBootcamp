#include <iostream>
using namespace std;

class MyFloat
{
    float ft;

public:
    MyFloat()
    {
        ft = 0.1;
    }

    void getValue()
    {
        cout << ft << endl;
    }

    // operator overloading
    void operator()(float f)
    {
        ft += f;
    }
};

int main()
{
    MyFloat floaty;
    floaty.getValue();

    // This is not achieved by constructor, so call the object as a function
    floaty(0.1);
    floaty.getValue();

    // Automatic typecasting to float
    floaty(1);
    floaty.getValue();

    return 0;
}

/*

Functors OR Functional Operator:

    - A C++ functor (function object) is a class or struct object that can be called like a function.

    - It overloads the function-call operator () and allows us to use an object like a function.

    - Note: Remember to set public access specifier while overloading the () operator for the class, since by default the members of a class are private.

*/