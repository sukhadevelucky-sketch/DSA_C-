#include <iostream>
using namespace std;
int main()
{
    int i = 1, n, factorial = 1;
    cout << "Enter the N :";
    cin >> n;
    while (i <= n)
    {
        factorial = factorial * i;
        i++;
    }
    cout << "The factorial of " << n << " is = " << factorial << endl;
}