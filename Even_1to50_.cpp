#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    cout << "***The Even number***" << endl;
    while (i <= 50)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
        i++;
    }
}