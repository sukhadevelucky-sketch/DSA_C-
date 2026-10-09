#include <iostream>
using namespace std;
int main()
{
    int CorrectPIN = 6969;
    int EnterPIN;
    cout << "Enter your ATM PIN " << endl;
    cin >> EnterPIN;
    if (EnterPIN == CorrectPIN)
    {
        cout << "ATM Pin is correct...." << endl;
        cout << "welcome to ATM" << endl;
    }
    else
    {
        cout << "Enter pin is incorrect...." << endl;
        cout << "Please re-enter the ATM PIN..." << endl;
    }
}
