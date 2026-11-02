#include <iostream>
using namespace std;
int main()
{
    int i = 1, n, count = 0;
    cout << "Enter the number N :";
    cin >> n;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            count++;
        }
        if (i % 3 == 0)
        {
            count++;
        }

        i++;
    }
    cout << "Numbers from 1 to N that are divisible by both 2 and 3 :" << count;
}