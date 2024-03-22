#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

string api_call()
{
    return "Get some data from Web \n";
}

int another_api_call()
{
    return 5;
}

int main()
{
    // string response = api_call();
    auto response = api_call();
    cout << "API call value: " << response;

    auto rep = another_api_call();
    cout << "Another API call value: " << rep << endl;

    if (typeid(response) == typeid(string))
    {
        puts("Types of both ID matches");
    }

    if (typeid(rep) == typeid(int))
    {
        puts("Types of both ID matches \n");
    }

    return 0;
}

/*
- C++ is considered a strongly typed language. Strong typing means that the type of a variable or expression is enforced by the compiler, and conversions between different types must be explicit. This helps prevent unintended behavior and enhances code clarity and safety.

- The auto keyword is used before any variable or any function, and it automatically gets the data type of the variable or the function from its initial value.

- In C++, typeid is an operator used to obtain the data type of a variable or an expression. It's particularly useful in scenarios where you need to determine the type of an object at runtime, such as when implementing polymorphic behavior.
*/