#include <iostream>
using namespace std;
int main()
{
    int i = 1, n, sum = 0;
    cout << "***Calculate the average of the first N natural numbers***" << endl;
    cout << "Enter the N :";
    cin >> n;

    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    cout << "The sum of 1 to N :" << sum << endl;
    cout << "The Average is :" << (float)sum / n;
}