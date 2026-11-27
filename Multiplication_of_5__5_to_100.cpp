#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    do
    {
        if (a % 5 == 0)
        {
            cout << a << "\n";
        }
        a++;
    } while (a <= 100);
}