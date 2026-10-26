#include <iostream>
using namespace std;
int main()
{
    int n, a, pos = 0, neg = 0, zero = 0;
    cout << "Read N integers and count positive, negative, and zero values separately." << endl;
    cout << "Enter the Integer : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (a > 0)
        {
            pos++;
        }
        else if (a < 0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
    }
    cout << "The positive integer : " << pos << endl;
    cout << "The Negative integer : " << neg << endl;
    cout << "The Zero  value  : " << zero << endl;
}