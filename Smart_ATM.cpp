#include <iostream>
using namespace std;
int main()
{
    cout << "Smart ATM Transation system." << endl;

    float balance, amount;
    int type, withdrwals;
    cout << "Enter the Account balance :" << endl;
    cin >> balance;
    cout << "Enter the withdrawal amount :" << endl;
    cin >> amount;
    cout << "Enter the account type :(1 = saving ,2 = current)" << endl;
    cin >> type;
    cout << "Enter the withdrwals made today:" << endl;
    cin >> withdrwals;

    if (amount <= 0)
    {
        cout << "Invalid amount enterd" << endl;
    }
    else if (amount > 25000)
    {
        cout << "Daily limit exceeded" << endl;
    }
    else
    {
        int fee = 0;
        if (withdrwals > 5)
        {
            fee = 50;
        }
        int remaining = balance - amount - fee;
        if (type == 1 && remaining < 1000)
        {
            cout << "Insufficient balance" << endl;
        }
        else if (type == 2 && remaining < 500)
        {
            cout << "Insufficient balance" << endl;
        }
        else if (remaining < 0)
        {
            cout << "Insufficient balance" << endl;
        }
        else
        {
            cout << "withdrwal made successful !!" << endl;
            cout << "final balance is " << remaining;
        }
    }
}
