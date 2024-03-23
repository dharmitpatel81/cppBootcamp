#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main()
{
    queue<int> myq;

    myq.push(10);
    myq.push(12);
    myq.push(14);
    myq.push(16);

    cout << myq.front() << endl;
    cout << myq.back() << endl;

    myq.pop();
    cout << myq.front() << endl;

    while (!myq.empty())
    {
        cout << " " << myq.front();
        myq.pop();
    }

    cout << "\n";

    cout << "Outside" << endl;
    cout << myq.front() << endl;

    // Priority Queue
    priority_queue<int> mypq;

    mypq.push(10);
    mypq.push(40);
    mypq.push(50);
    mypq.push(5);

    while (!mypq.empty())
    {
        cout << " " << mypq.top();
        mypq.pop();
    }

    cout << "\n";

    return 0;
}

/*

Queue in STL:
    - Follows FIFO Rule
    - Disadvantage: It doesn't give access of iterators.

Priority-Queue in STL:
    - By default, STL priority_queue gives the largest element the highest priority.
    - It is specially used in trading and system level works.

*/