#include <iostream>
using namespace std;

int liftUp()
{
    static int life = 3;
    // return life = life + 1;
    // return life++;
    return ++life;
}

int main()
{
    int life = 3;
    cout << "Your starting game life is: " << life << endl;

    life = liftUp();
    printf("Your updated game life is: %d \n", life);

    life = liftUp();
    printf("Your updated game life is: %d \n", life);

    return 0;
}

/*
C++ is a compiled language, which means a compiler has to take your written C++ code and convert it to binary code that the computer can actually understand.

There are two stages to compilation of code in C++:
    1. Compiling from source code to object files
    2. Linking the object files to executable binaries

Linkers:
    - https://stackoverflow.com/questions/9248533/how-does-a-linker-know-what-all-libraries-to-link
    - https://stackoverflow.com/questions/3322911/what-do-linkers-do

C++ provides us with the feature to add extra quality to our variables by specifying volatility or constantness to them.

Types of Qualifiers:
    - Modification Qualifiers -> const, volatile (used in multi-threded pgm), mutable
    - Life Duration Qualifiers -> static, register, extern, auto (no longer used nowadays)

Volatile -> Same variable can be modify by other thread in the process
Extern -> Maybe sometime we want to store something into external libraries

When a variable is declared as static, space for it gets allocated for the lifetime of the program. Even if the function is called multiple times, space for the static variable is allocated only once and the value of the variable in the previous call gets carried through the next function call (Maintain the state of a variable).

a++ -> postfix
++a -> prefix
*/