#include <iostream>
using namespace std;
int main()
{
    int unit;
    int type;
    int bill;
    cout << "Enter the electric unit consume :" << endl;
    cin >> unit;
    cout << "Enter the your electric consumer type ( 1 = Resedential and 2 = Commercial) :" << endl;
    cin >> type;

    if (unit < 0)
    {
        cout << "Invalid enter...";
    }

    else if (type == 1)
    {
        if (unit <= 100)
        {
            bill = unit * 3;
        }
        else if (unit <= 200)
        {
            bill = (100 * 3) + ((unit - 100) * 5);
        }
        else if (unit <= 400)
        {
            bill = (100 * 3) + (100 * 5) + ((unit - 200) * 7);
        }
        else
        {
            bill = (100 * 3) + (100 * 5) + (200 * 7) + ((unit - 400) * 10);
        }

        if (unit > 500)
        {
            bill = bill + 500;
        }

        cout << "Resedental type" << endl;
        cout << "Number of consume unit : " << unit << endl;
        cout << "The bill is :  " << bill << endl;
    }

    if (type == 2)
    {
        if (unit <= 100)
        {
            bill = unit * 6;
        }
        else if (unit <= 300)
        {
            bill = (100 * 6) + ((unit - 100) * 8);
        }
        else if (unit >= 300)
        {
            bill = (100 * 6) + (200 * 6) + ((unit - 300) * 12);
        }

        if (unit > 500)
        {
            bill = bill + 1000;
        }

        cout << "Commercial type" << endl;
        cout << "Number of consume unit : " << unit << endl;
        cout << "The bill is :  " << bill << endl;
    }
}