#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    cin >> number;
    printf("Your ID is %d\n", number + 3);
}

/*
- Case-Sensitive: five and Five treated as distinct
- Non-latin Support: NON-ASCII letter such as chinese letter, Hindi Alphabet character
- dont-go-beyond-31-characters
- :: -> scope resolution operator
*/