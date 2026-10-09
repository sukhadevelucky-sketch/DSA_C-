#include <iostream>
using namespace std;
int main()
{
    int battery;
    cout << "Enter the battery percentage :" << endl;
    cin >> battery;

    if (battery >= 21)
    {
        cout << "Battery is charged" << endl;
    }

    else if (battery < 20)
    {
        cout << "Low battery " << endl;
        cout << "Please charged your mobile phone " << endl;
    }

    else
    {
        cout << "Mobile battery is dead!!!" << endl;
    }
}
