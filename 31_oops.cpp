#include <iostream>
#include <string>
using namespace std;

class User
{
    // default status is private, so there is no need to explicitly mention it
    int _secret = 22;

public:
    string name = "default";
    void classMessage();

    // Setter
    void setSecret(const int &newSecret)
    {
        // Put security check here using if condn!
        _secret = newSecret;
    }

    // Getter
    int getSecret() const;
};

// Put code in separate file to make code much modular
void User::classMessage()
{
    cout << "Class is great, " << name << endl;
}

int User::getSecret() const
{
    return _secret;
}

int main()
{
    User sam;
    sam.name = "Sam";
    sam.classMessage();
    sam.setSecret(333);
    cout << sam.getSecret() << endl;

    User hitesh;
    hitesh.classMessage();
    hitesh.name = "hitesh";
    hitesh.classMessage();

    const User rock;
    cout << rock.getSecret() << endl;

    // Every properties of sam is copied into peter
    User peter = sam;
    cout << peter.getSecret() << endl;

    return 0;
}

/*
- Class, Objects, Access Specifier, Data memebers, Member Functions, Getter, Setter, Constructor, Destructor, Copy Constructor, Rule of three, Rule of five

- Access specifiers define how the members (attributes and methods) of a class can be accessed.
    1. public - members are accessible from outside the class
    2. private - members cannot be accessed (or viewed) from outside the class
    3. protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.

- Always write class on the separate file

- className first letter is always capital (Good Practice)

- Encapsulation is to make sure that "sensitive" data is hidden from users. To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class). If you want others to read or modify the value of a private member, you can provide public get and set methods.

    Getter: It's return value to the user

    Setter: It's set the value into any of the private data member

- Use _ before variable name to make it private

- If any class only consist of variables, its good practice to convert it to struct

- Non-constant object can access constant methods, but constant methods cannot access non-constant methods.

   Ex:  int getSecret() const { return _secret; }

*/