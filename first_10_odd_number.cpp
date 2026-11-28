#include <iostream>
using namespace std;
int main()
{
    int a = 1, num;

    cout << "The first 10 odd num. \n";
    do
    {
        if (a % 2 != 0)
        {
            cout << a << "\n";
        }

        a++;

    } while (a <= 20);
}