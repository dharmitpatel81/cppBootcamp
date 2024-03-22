#include <iostream>
using namespace std;

int main()
{
    // Arithmatic
    int life = 3;
    int points = 4;

    // int score = -points;

    int score = 2;
    score += points;

    if (life != 0)
    {
        puts("Into the if block...");
    }

    // Logical

    // bool isSignedIn = true;
    bool isAdmin = true;
    bool isfbUser = true;
    bool isgoogleUser = true;

    if ((isfbUser || isgoogleUser) && isAdmin)
    {
        puts("Welcome Admin!");
    }
    else
    {
        puts("No Admin Access 💀");
    }

    if (isfbUser || isgoogleUser)
    {
        puts("Welcome User");
    }

    // Bitwise
    unsigned int x = 6;
    unsigned int y = 7;

    unsigned int z = x & y;
    cout << "Value of z is " << z << endl;

    return 0;
}

/*
- Arithmatic : +, -, *, /, %
- Unary: -var, +var, ++var, --var, !var
- Logical: &&, ||, !
- Bitwise: &, |, ^ (XOR), << (left shift),  >> (right shift), ~ (NOT)

- XOR is 1 if the two bits are different.
- ~ inverts all bits of a number.
- z >> 2 means right shift of 2
- z << 2 means left shift of 2

http://easyonlineconverter.com/converters/bitwise-calculator.html

*/