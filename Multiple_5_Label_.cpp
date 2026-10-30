#include <iostream>
using namespace std;
int main()
{
    cout << " Print numbers from 1 to 50 and label each as a multiple of 5 or not." << endl;
    for (int i = 1; i <= 50; i++)
    {
        if (i % 5 != 0)
        {
            cout << i << " = Not Multiple of 5." << endl;
        }
        else
        {
            cout << i << " = Multiple  of 5." << endl;
        }
    }

    return 0;
}
