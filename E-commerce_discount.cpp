#include <iostream>
using namespace std;
int main()
{
    float amount, discount;
    int type;
    cout << " Enter the purchase amount :" << endl;
    cin >> amount;
    cout << "Enter the membership type( 1 = Regular , 2 = Silver, 3 = Gold, 4 = Platinum) :" << endl;
    cin >> type;

    if (amount < 1999)
        discount = 0;

    else if (amount < 4999)
        discount = 5;

    else if (amount < 9999)
        discount = 10;

    else
        discount = 20;

    if (type == 2)
        discount += 2;

    else if (type == 3)
        discount += 5;

    else if (type == 4)
        discount += 8;

    if (discount > 30)
        discount = 30;

    else

        cout << "Discount = " << discount << "%" << endl;
    cout << "Discount Amount = " << amount * discount / 100 << endl;
    cout << "Final Amount = " << amount - amount * discount / 100 << endl;

    return 0;
}