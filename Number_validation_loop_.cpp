// Keep asking for a number until the user enters a value between 1 and 10.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number(value between 1 to 10) :";
    cin >> num;
    while (num < 1 || num > 11)
    {
        cout << "Invalide number enter..." << endl;
        cout << "Enter the number(value between  to 10) :";
        cin >> num;
    }
    cout << "Correct input...";
}