#include <iostream>
using namespace std;
int main()
{
    int balance = 30000;
    int withdraw;
    cout << "Enter your withdrwa amount:";
    cin >> withdraw;
    if (withdraw <= balance)
    {
        cout << "Your enter amount is withdrwa" << endl;
        int remain = balance - withdraw;
        cout << "Your remianing balance is : " << remain << endl;
    }
    else
    {
        cout << "You have insifficient balance" << endl;
    }
}
