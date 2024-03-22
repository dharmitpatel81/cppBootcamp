#include <iostream>
using namespace std;

int main()
{
    // int call_api = 2;
    // float call_api = 2.0;
    char call_api = 'h';

    try
    {
        cout << "Trying to use API value \n";
        cout << "Did some testing with API value \n";
        throw call_api;
        cout << "No code execute after return and throw";
    }
    catch (int x)
    {
        cout << "Integer exception handled \n";
    }
    catch (float f)
    {
        cout << "Float exception handled \n";
    }
    catch (...)
    {
        cout << "Something went wrong! \n";
    }

    cout << "Keep on moving rest of code" << endl;

    return 0;
}