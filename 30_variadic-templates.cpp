#include <iostream>
#include <string>
using namespace std;

// for single arguments
template <typename T>
void func(T t)
{
    cout << "One Func " << t << endl;
}

// for multiple arguments (used recursive approach)

/*
Here, every single time a list of arguments is passed on, the first value is considered as T, and the rest of all the values stored in the list of arguments
*/
template <typename T, typename... Args>
void func(T t, Args... args)
{
    cout << "Two Func " << t << endl;
    func(args...);
}

int main()
{
    string myName = "dharmit";

    func(1);
    func(1, 2, 3.4, 4.5, myName);

    return 0;
}

/*
- Variadic templates can take any number of arguments.
- It is denoted by three dot (...)
- We can define as many typename as we want in the templates.
- Ex: typename... Args -> Variadic typename (Args is most commonly used)
*/