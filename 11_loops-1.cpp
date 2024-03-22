#include <iostream>
using namespace std;

int main()
{
    int my_numbers[] = {4, 5, 6, 7, 8, 9, 0};

    // while loop
    // int i = 0;
    // while (i < 7)
    // {
    //     if (i == 3)
    //     {
    //         // break;

    //         i++;
    //         cout << "Skip this one" << endl;
    //         continue;
    //     }

    //     cout << "Current number is " << my_numbers[i] << endl;
    //     i++;
    // }

    // do-while loop
    // int i = 0;
    // do
    // {
    //     cout << "Current number is " << my_numbers[i] << endl;
    //     i++;
    // } while (i < 7);

    // for loop
    for (int i = 0; i < 7; i++)
    {
        cout << my_numbers[i] << endl;
    }

    cout << "Get a break!" << endl;

    // Range based for loop [for each]
    for (int i : my_numbers)
    {
        cout << i << endl;
    }

    cout << "Outside of the loop" << endl;
    return 0;
}

/*
- pre increment: ++a
- post increment: a++
- break: terminate the loop
- continue: skip current iteration
- Use of do-while loop in writing drivers, hardwares like sensors
- do-while executed at least one irrespective of condition
- Foreach loop is used to iterate over the elements of a container (array, vectors, etc) quickly without performing initialization, testing, and increment/decrement. 
*/