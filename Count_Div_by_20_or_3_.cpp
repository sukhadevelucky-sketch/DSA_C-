#include <iostream>
using namespace std;
int main()
{
    int i = 1, n, count = 0;
    cout << "Enter the number n : ";
    cin >> n;

    while (i <= n)
    {
        if (i % 2 == 0 or i % 3 == 0)
        {
            count++;
        }
        i++;
    }

    cout << "The number divisible by 2 or 3 = " << count;
}