#include <iostream>
#include <string>

#define ENDMESSAGE cout << "Program ends here! \n"
#define END return 0

#define LCOINT int32_t
#define LCOCCPC const char *const

// Used in Game Engine
#define console_log(a) cout << a << endl

using namespace std;

int main()
{
    LCOINT a = 4;
    cout << a << endl;

    int score = 400;
    console_log(score); // We can also pass values in macro

    string name = "Dharmit";
    console_log(name);

    ENDMESSAGE;
    END;
}

/*
- Macros are defined using the #define directive. They provide a way to create symbolic constants and code snippets that can be reused throughout a program.

- Macros are processed by the C++ preprocessor, which runs before the actual compilation.

- During preprocessing, macros are replaced with their corresponding values, making it an effective tool for code generation and simplification.

- Other uses like #ifdef, #ifndef

- #define LCOINT int32_t -> One changes help us to make our program efficient

*/