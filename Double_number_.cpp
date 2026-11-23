#include <iostream>
using namespace std;
int main()
{
    int i = 1, n;
    cout << "Number from 1 to N along with its double." << endl;
    cout << "Enter the N : ";
    cin >> n;
    while (i <= n)
    {
        cout << " The Double of " << i << " = " << i + i << endl;
        i++;
    }
    return 0;
}