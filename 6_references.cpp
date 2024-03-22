#include <iostream>
using namespace std;

int main()
{
    int score = 200;
    int *myptr = &score;
    printf("Value of score is %d\n", score);
    printf("Value of pointer is %p\n", myptr);

    int &another_score = score;
    another_score = 800;

    printf("Value of score is %d\n", score);
    printf("Value of pointer is %p\n", myptr);

    return 0;
}

/*
- Reference can be created by simply using an ampersand (&) operator. When we create a variable, then it occupies some memory location. We can create a reference of the variable; therefore, we can access the original variable by using either name of the variable or reference.

- Any update we making in reference, it will also make change in actual value of variable
*/