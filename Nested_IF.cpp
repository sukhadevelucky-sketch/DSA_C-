#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the A :" << endl;
    cin >> a;
    cout << "Enter the B :" << endl;
    cin >> b;
    cout << "Enter the C :" << endl;
    cin >> c;

    if (a == 10)
    {
        if (b == 20)
        {
            if (c == 30)
            {
                cout << " All condition are True....";
            }
            else
            {
                cout << " C Condition become False";
            }
        }
        else
        {
            cout << "B Condition become False";
        }
    }
    else
    {
        cout << " A Condition become False";
    }
}