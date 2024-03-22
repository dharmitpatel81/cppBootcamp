#include <iostream>
#include <string>
using namespace std;

int main()
{
    []{ cout << "Welcome Spartans! \n"; }();

    /*
    Here,
        [] is called the lambda introducer which denotes the start of the lambda expression
        () is called the parameter list which is similar to the () operator of a normal function
    */

    [](){ return 10; };

    // Generalize lambda
    auto sum = [](auto a, auto b)
    {
        return a + b;
    };

    cout << "Sum of 2 and 5 is " << sum(2, 5) << endl;
    cout << "Sum of 2.5 and 5.5 is " << sum(2.5, 5.5) << endl;

    string a = "abc";
    string b = "def";
    cout << sum(a, b) << endl;

    return 0;
}

/*

- Lambda functions in C++ are in-place functions that can be written for short code snippets that are not intended to be reused, so there is no need to name them as well. It was introduced in Modern C++ beginning from C++11. 

- Generally, the return-type in lambda expressions is evaluated by the compiler itself and we don’t need to specify it explicitly.

- An anonymous function is not accessible after its initial creation, it can only be accessed by a variable it is stored in as a function as a value. 

- We have used the auto keyword to automatically deduce the return type for lambda expression.

- We should use lambdas where we can improve the readability of and simplify our code such as when writing callback functions.

*/