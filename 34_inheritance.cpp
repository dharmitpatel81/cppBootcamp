#include <iostream>
#include <string>
using namespace std;

// Base class - 1
class Man
{
    string _name;
    int _age;
    Man(){};

protected:
    Man(const string &name, const int &age) : _name(name), _age(age) {}
    void run() { puts("I can run"); }

public:
    void sayName() const;
};

void Man::sayName() const
{
    cout << "My name is " << _name << " and age is " << _age << endl;
}

// Base class - 2
class Money
{
public:
    void getMoney()
    {
        puts("Got 5k USD in my account");
    }
};

// Superman - Derived class
class Superman : public Man
{
    bool flight;

public:
    Superman(string name) : Man(name, 26){};
    void run() { puts("I can run at light speed"); }
};

// Spiderman - Derived class
class Spiderman : public Man, public Money
{
    bool webbing;

public:
    Spiderman(string name) : Man(name, 19){};
    void run() { puts("I can run at normal speed"); }
};

int main()
{
    Superman clark("kent");
    clark.sayName();
    clark.run();

    Spiderman peter("peter");
    peter.sayName();
    peter.run();
    peter.getMoney();

    return 0;
}

/*
Inheritance:
- Method can be overloaded with same name in different classes.

- class  <derived_class_name> : <access-specifier> <base_class_name> {}

- When a base class is privately inherited by the derived class, public members of the base class becomes the private members of the derived class and therefore, the public members of the base class can only be accessed by the member functions of the derived class. They are inaccessible to the objects of the derived class.

- On the other hand, when the base class is publicly inherited by the derived class, public members of the base class also become the public members of the derived class. Therefore, the public members of the base class are accessible by the objects of the derived class as well as by the member functions of the derived class.

- Multiple inheritance is the process of deriving a new class that inherits the attributes from two or more classes.

- When one class inherits another class which is further inherited by another class, it is known as multi level inheritance.

- NOTE:
    1. In C++, the default mode of visibility is private.
    2. The private members of the base class are never inherited.
*/