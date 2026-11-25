#include <iostream>
using namespace std;
int main()
{
    string password = "Lucky";
    string pass;
    cout << "Enter the correct  password : ";
    cin >> pass;
    while (pass != password)
    {
        cout << "Password incorrect !!" << endl;
        cout << "Enter the correct  password :";
        cin >> pass;
    }

    cout << "Correct password ..." << endl;
    cout << "System now star...." << endl;
}