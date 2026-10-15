#include <iostream>
using namespace std;
int main()
{
    int n;
    int count = 0;
    cout << "Enter the number : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            count++;
        }
    }
    cout << "the odd numbers from 1 to N are : " << count;
}