#include <iostream>
using namespace std;

void sayHello()
{
    puts("Hello there!");
}

int sayTwo()
{
    // puts("2");
    return 2;
}

void sayThree()
{
    puts("3");
}

int main()
{
    sayHello();
    printf("%d \n", sayTwo() + 2);
    sayThree();

    return 0;
}

/*
- Always define function first then make a call
*/
