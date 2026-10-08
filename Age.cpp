#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter the age = ";
    cin >> age;
    if (age >= 18)
    {
        cout << "Matured";
    }
    else
    {
        cout << " under 18 year old ";
    }
}