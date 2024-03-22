#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> myints = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int x : myints)
    {
        cout << x << " ";
    }

    cout << "\n";

    // partition(myints.begin(), myints.end(), [](auto x) { return x % 2 == 0; });

    // Another syntax:
    partition(begin(myints), end(myints), [](auto x){ return x % 2 == 0; });

    // stable_partition(myints.begin(), myints.end(), [](auto x) { return x % 2 == 0; });

    for (int x : myints)
    {
        cout << x << " ";
    }

    cout << "\n";

    return 0;
}

/*

- The partition() function takes the following parameters:

    - first: A bidirectional iterator pointing to the first element in the range.
    - last: A bidirectional iterator pointing to the last element in the range.
    - pred: A user-defined function that defines the condition on the basis of which the elements are partitioned. We can use lambda function here.

- This function is used to partition the elements on the basis of the user-defined function (a predicate) passed as an argument.

- stable_partition() actually tries to maintain the order of the values that we have given.

*/