#include <iostream>
using namespace std;

int main()
{
    int rating = 4;

    if (rating == 5)
    {
        puts("5 star rated");
    }
    else if (rating == 4)
    {
        puts("4 star rated");
    }
    else
    {
        puts("NOT 4 or 5 star rated");
    }

    // Exeption: 0 or false or NULL didn't display anything

    if (true)
    {
        puts("Go for it");
    }

    // Ternary operator
    printf("Your rating feedback is %s \n", rating == 4 ? "true block" : "false block");

    return 0;
}

/*
- All comparisons in cpp return values as 0 or 1.
*/
