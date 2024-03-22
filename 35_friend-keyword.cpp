#include <iostream>
#include <string>
using namespace std;

// Base class
class Man
{
    string _name;
    int _age;
    Man(){};

    friend class Superman;

protected:
    Man(const string &name, const int &age) : _name(name), _age(age) {}
    void run() { puts("I can run"); }
    int getAge() { return _age; }

public:
    void sayName() const;
};

void Man::sayName() const
{
    cout << "My name is " << _name << " and age is " << _age << endl;
}

// Superman - Derived class
class Superman : public Man
{
    bool flight;

public:
    Superman(string name) : Man(name, 26){};
    void run() { printf("I can run at light speed %d \n", _age); } // here we access private member of base class
};

// Spiderman - Derived class
class Spiderman : public Man
{
    bool webbing;

public:
    Spiderman(string name) : Man(name, 19){};
    void run() { printf("I can run at normal speed %d \n", getAge()); }
};

int main()
{
    Superman clark("kent");
    clark.sayName();
    clark.run();

    Spiderman peter("peter");
    peter.sayName();
    peter.run();

    return 0;
}

/*

X---------------------------- [Stay away from Friend keyword in C++ 💀] ---------------------------------X

- A friend class can access private and protected members of other classes in which it is declared as a friend. It is sometimes useful to allow a particular class to access private and protected members of other classes.

    Syntax : friend class class_name;    // declared in the base class

- We can declare friend class or function anywhere in the base class body whether its private, protected or public block. It works all the same.

- Disadvantages of Friend Functions:
    1. Friend functions have access to private members of a class from outside the class which violates the law of data hiding (create security issues).
    2. Friend functions cannot do any run-time polymorphism in their members.

*/