#include <iostream>
#include <string>
using namespace std;

class One
{
public:
    void intro()
    {
        puts("I am One!");
    }
};

class Two : public One
{
public:
    void intro()
    {
        puts("I am Two!");
    }
};

class Three : public One
{
public:
    void intro()
    {
        puts("I am Three!");
    }
};

int main()
{
    One *a;
    Two b;
    Three c;

    // a.intro();
    // b.intro();
    // c.intro();

    // pointer of Base type that points to derived-1
    a = &b;
    a->intro();

    // pointer of Base type that points to derived-2
    a = &c;
    a->intro();

    return 0;
}

/*
- In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form. A real-life example of polymorphism is a person who at the same time can have different characteristics.

- Virtual Functions are used to support Runtime Polymorphism.

- Virtual keyword tells the compiler not to make the decision (of function binding) at compile time, rather postpone it for runtime".

- In C++, a pure virtual function is a virtual function that is declared in a base class but has no implementation. It is designated by assigning it the value 0 in its declaration. A class containing at least one pure virtual function is known as an abstract class, and you cannot instantiate objects of an abstract class directly.

- The purpose of pure virtual functions is to define an interface that derived classes must implement. Each derived class must provide its own implementation for the pure virtual function(s) to become concrete and can be instantiated.

    Syntax : virtual<func_type><func_name>() = 0;

    Example : virtual void draw() const = 0;
    
              void draw() const override { cout << "Drawing Square" << endl; }

*/