#include <iostream>
#include <string>
using namespace std;

class Phone
{
    string _name = "";
    string _os = "";
    int _price = 0;
    Phone(); // default constructor

public:
    Phone(const string &name, const string &os, const int &price); // parameter constructor
    Phone(const Phone &);                                          // copy Constructor

    string getName()
    {
        printf("Value of getName is %p \n", this);
        return _os;
    }

    int getPrice();

    ~Phone(); // destructor
};

int Phone::getPrice()
{
    printf("Value of getPrice is %p \n", this);
    return _price;
}

Phone::Phone() : _name("Samsung"), _os("Andy"), _price()
{
    puts("Default Constructor");
}

Phone::Phone(const string &name, const string &os, const int &price) : _name(name), _os(os), _price(price)
{
    puts("Parameter Constructor");
}

Phone::Phone(const Phone &values)
{
    puts("OVERWRITE copy constructor");
    _name = "new-" + values._name;
    _os = "Skinned-" + values._os;
    _price = values._price;
}

Phone::~Phone()
{
    cout << "Destructor called for " << _name << endl;
}

int main()
{
    // Disable this constructor to avoid ambiguity and restrict to write one type of constructor (Put it into private specifier)

    // Phone samsungA1;
    // cout << samsungA1.getName() << endl;

    Phone OnePlus8("OP8", "Android-Oxy", 799);
    cout << OnePlus8.getName() << endl;

    printf("Value of object is %p \n", &OnePlus8);
    cout << OnePlus8.getPrice() << endl;

    Phone OnePlus8S = OnePlus8;
    cout << OnePlus8S.getName() << endl;

    return 0;
}

/*
- Constructor is a member function of a class, whose name is the same as the class name.
- Constructor is a special type of member function that is used to initialize the data members for an object of a class automatically when an object of the same class is created.
- Constructors do not return value, hence they do not have a return type.
- Constructors can be overloaded.
- A constructor cannot be declared virtual.

- The copy constructor in C++ is used to copy data from one object to another.

- Destructor release memory space occupied by the objects created by the constructor.
- Destructor has the same name as their class name preceded by a tilde (~) symbol.
- In destructor, objects are destroyed in the reverse of an object creation.
- It is not possible to define more than one destructor.
- It is automatically called when an object goes out of scope.


- NOTE:
    if the object is created by using new or the constructor uses new to allocate memory that resides in the heap memory or the free store, the destructor should use delete to free the memory.

    _name(), _os(), _price() -> default parameter

- Sources:
    - https://stackoverflow.com/questions/4172722/what-is-the-rule-of-three

*/