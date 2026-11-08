#include <iostream>
using namespace std;
int main()
{
    int n, digit, reverse = 0;
    cout << "Enter the number :";
    cin >> n;
    int a = n;
    if (n < 0)
    {
        cout << 0;
    }
    while (n > 0)
    {
        int digit = n % 10;
        reverse = (reverse * 10) + digit;
        n = n / 10;
    }
    if (reverse == a)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
    return 0;
}