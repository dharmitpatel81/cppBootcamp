#include <iostream>
using namespace std;

// Using this Blueprint, we can create as many Users we can.
struct User
{
    const int uid;
    const char *name;
    const char *email;
    int course_count;
};

int main()
{
    User micky = {001, "micky", "micky@cartoon.com", 2};
    User donald = {002, "donald", "donald@cartoon.com", 3};

    cout << micky.email << endl;

    donald.course_count = 5;
    cout << donald.course_count << endl;

    cout << donald.email << endl;
    donald.email = "dnd@cartoon.com";
    cout << donald.email << endl;

    // Create refrences
    User *d = &donald;
    cout << d->email << endl;

    return 0;
}

/*
- A structure is a collection of variables of different data types under a single name.
- It is similar to a class as both hold a collection of data of different data types.
- const char *email; -> It means we make const pointer irresepctive of their values
- The -> (arrow) operator is used to access class, structure or union members using a pointer.
- In recent version, we can add more functionalities in structure other than datatypes.
*/