#include <iostream>
using namespace std;

int main()
{
    // float value comes with cost of precision
    printf("Size of float is %ld bits \n", sizeof(float) * 8);
    printf("Size of long is %ld bits \n", sizeof(long) * 8);
    printf("Size of double is %ld bits \n", sizeof(double) * 8);
    printf("Size of long double is %ld bits \n", sizeof(long double) * 8);

    float my_p_value = 20.2 + 20.2;

    if (my_p_value == 40.400002)
    {
        puts("You got it right!");
    }
    else
    {
        puts("Something wrong!");
    }

    printf("My P Value is %f in float \n", my_p_value);
    printf("My P Value is %1.30f in float \n", my_p_value);

    return 0;
}
