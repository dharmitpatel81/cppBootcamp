#include <iostream>
using namespace std;

// function definition
int factorial(int n);

int main()
{
    // Factorial: 5*4*3*2*1 || 1*2*3*4*5

    int n;
    cout << "Enter a value: ";
    cin >> n;

    cout << "Result for factorial is " << factorial(n) << endl;

    return 0;
}

int factorial(int n)
{
    if (n > 1)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}

/*
- If we define the helper function below the main() method, we must define the function definition at the top.

- Recursion is a function which keeps on calling itself again and again, but with an exit strategy.

- If a recursion is not going to have an exit strategy, it's going to keep on calling itself and eventually run out of memory, and the programme will crash.

- Cons: It's not a very efficient way and consumes a lot of memory, so it's not good for competitive programming.
*/