#include <iostream>
using namespace std;
int main()
{
    int health;
    cout << "Enter the health of player = " << endl;
    cin >> health;

    if (health >= 10)
    {
        cout << "Player have power to paly game " << endl;
    }
    else
    {
        cout << "Player  is to weak to paly game" << endl;
        cout << "Player Dead now!!" << endl;
    }
}