#include <iostream>
using namespace std;
int main()
{
    int i = 1, n;
    cout << "The multiplication table " << endl;
    cout << "Enter the num : ";
    cin >> n;
    while (i <= 10)
    {
        cout << i * n << endl;
        i++;
    }
}