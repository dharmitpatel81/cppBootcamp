#include <iostream>
#include <string>
#include <memory>
using namespace std;

class User
{
public:
    User()
    {
        cout << "User created! \n";
    }

    ~User()
    {
        cout << "User deleted! \n";
    }

    void testFunc()
    {
        cout << "I am a test function \n";
    }
};

int main()
{
    {
        // Non-favourite way of developers
        // unique_ptr<User>(new User());

        unique_ptr<User> sam = make_unique<User>();
        sam->testFunc();

        //  unique_ptr<User> samm = sam; // NOT ALLOWED
    }

    {
        // shared_ptr<User> tim(new User()); // WASTE LOT OF MEMORY AND BAD PRACTICE

        /*
        Reason:
        - Whenever we use new keyword we use heap memory instead of stack memory
        - In case of shared ptr, memory is allocated in stack and which keeps a track
        */

        shared_ptr<User> tim = make_shared<User>();
        weak_ptr<User> wtim = tim;
        shared_ptr<User> timm = tim;
    }

    cout << "Outside code \n";

    return 0;
}

/*

Problem with old pointer:
    - Memory leak leads to security issue in some cases.
    - With new, we must use delete keyword to allocate & deallocate memory.
    - Solution: Smart Pointers solves the issue of forgetting delete.

    EX:

    int x;
    int* p = new int;
    p = &x;  // re-pointed but "new int" not deleted

    Solution: We have to remember to delete the allocated memory and then point the pointer to another target:

    int x;
    int* p = new int;
    delete p;
    p = &x;

The raw pointers are exactly the same with normal pointers, they can be written like this:
    EX: type * pointer_name = & variable_name;

Smart Pointers:
    - Wrapper around real "raw" pointer that means memory is allocated on stack, not on heap.
    - Always use <memory> headerfile
    - Since C++11, we have some special pointers, called "smart pointers". They are called "smart" because they know when they have to delete the used memory. They do it when nothing else in your program uses that block of memory.
    - Bring feature of Automatic memory management in C++
    - Empty Scope is usually defined by the curly braces { }

There are 3 types of smart pointers in C++11:

1. Unique Pointer:
    - it's always gonna to be unique
    - Memory get free as scope ends
    - We cannot copy them
    - Not allowed to share the memory references

2. Shared Pointer:
    - Allowed to share the memory references
    - When all the shared pointer done with their job, then memory get freed up.
    - We can create as many shared-pointer as we can.

3. Weak Pointer:
    - It is used to observe the object of a shared pointer tim and timm
    - It is stranded along guy, nobody is keeping a track of it.
    - Used for backward compatibility
*/