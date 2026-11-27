#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    do
    {
        if (a % 2 != 0)
        {
            cout << "Odd num :" << a << "\n";
        }
        a++;

    } while (a <= 50);
}