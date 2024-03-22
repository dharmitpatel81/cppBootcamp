#include <iostream>
using namespace std;

int main()
{
    char my_string[] = "Dharmit";
    char my_name[] = {'D', 'h', 'a', 'r', 'm', 'i', 't', 0};
    printf("My name is %s \n", my_string);
    printf("My name is %s \n", my_name);

    cout << "Take a break!" << endl;

    // Reverse logic to above string
    for (int i = 0; my_string[i] != 0; i++)
    {
        cout << "Character is: " << my_string[i] << endl;
    }

    cout << "Take a break! Part-2" << endl;

    // Another way
    for (int i = 0; my_string[i]; i++)
    {
        cout << "Character is: " << my_string[i] << endl;
    }

    cout << "Take a break! Part-3" << endl;

    // Using Character Pointer
    for (char *cp = my_name; *cp != 0; cp++)
    {
        cout << "Character is: " << *cp << endl;
    }

    cout << "Take a break! Part-4" << endl;

    for (char i : my_name)
    {
        if (i == 0)
            break;
        cout << "Character is: " << i << endl;
    }

    return 0;
}

/*
- String is considered as array of charcater
- Every string in cpp have zero or NULL as terminating character
*/