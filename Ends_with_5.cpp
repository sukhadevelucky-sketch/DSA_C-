#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    cout << "The  numbers from 1 to 100 that end with digit 5 :" << endl;
    while (i <= 100)
    {
        if (i % 10 == 5)
        {
            cout << i << endl;
        }
        i++;
    }
}