#include <iostream>
#include "24_adder.h"
using namespace std;

void lifeUp(int &life)
{
    ++life;
}

int main()
{
    int life = 3;
    lifeUp(life);
    cout << life << endl;

    int v1 = 4;
    int v2 = 5;
    float v3 = 5.6;
    float v4 = 7.5;

    cout << addme(v1, v2) << endl;
    cout << addme(v3, v4) << endl; // omitting decimal place values ( bad for banking application)

    return 0;
}

/*

A header file in C++ is a file with extension .h which contains function declarations and macro definitions to be shared between several source files. There are two types of header files: the files that the programmer writes and the files that comes with your compiler.

There are two types of header files in C++:

1. Pre-existing Header Files:
     These are the header files that are already present in the C++ directives and to use them. We need to include them in our program. They are generally included in the program using angular brackets.

    eg: #include<iostream>

2. User-defined Header Files:
    These are the header files created by the user and can be included in the program using double quotes.

    ==> Boilerplate code:

    #ifndef adder_h
    #define adder_h

    #endif

------------------------------------------------------------------------------
C++ Library:
- https://github.com/yhirose/cpp-httplib [ for http server ]
- https://lame.sourceforge.io/ [ for audio ]

C++ Web Frameworks:
- http://cppcms.com/wikipp/en/page/main [ used in FAANG to create web app ]
- https://crowcpp.org/master/ [ for routes or web socket (more popular)]
- https://kore.io/ [ easier ]
- https://github.com/jlaine/qdjango
- https://www.webtoolkit.eu/wt

- https://github.com/mongodb/mongo-cxx-driver
- https://github.com/sheredom/json.h

*/