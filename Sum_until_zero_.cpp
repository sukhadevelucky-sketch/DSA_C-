#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0;
    cout << "Enter the num (stop at 0):";
    cin >> num;
    while (num != 0)
    {
        sum = sum + num;
        cout << "Enter the num :";
        cin >> num;
    }
    cout << "The sum is = " << sum;
}