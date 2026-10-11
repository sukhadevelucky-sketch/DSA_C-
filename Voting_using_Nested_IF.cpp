#include <iostream>
using namespace std;
int main()
{
    int age;
    string country;
    cout << "Enter your age :" << endl;
    cin >> age;
    cout << "Enter your country :" << endl;
    cin >> country;

    if (age >= 18)
    {
        if (country == "India")
        {
            cout << "You are eligiable for voting..." << endl;
        }
        else
        {
            cout << "Country not match...." << endl;
        }
    }
    else
    {
        cout << "Under age" << endl;
    }
}