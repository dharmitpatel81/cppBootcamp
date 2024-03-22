#include <iostream>
using namespace std;

void lifeUp(int &life)
{
    ++life;
}

int addme(int a, int b)
{
    return a + b;
}

// float addme(float a, float b)
// {
//     return a + b;
// }

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
- For every method, before we actually call it, it needs to be defined.

- main() is an entry point, and it is automatically called by the compiler when we run the program.

- Functions can be overloaded (same name, different signatures), allowing you to write multiple 'flavors' of the same function. The right overload is selected based on the parameter types.

- Call by Value:-
    When we pass any value, a copy is passed so there is no change in the original value.

    lifeUp(life);

    void lifeUp(int life)
    {
        ++life;
    }

- Call by Reference (Solution of Call by Value):-
    It is done in two ways

    1.  lifeUp(&life);

        void lifeUp(int *life)
        {
            ++(*life);
        }

    2.  lifeUp(life);

        void lifeUp(int &life)
        {
            ++life;
        }


*/
