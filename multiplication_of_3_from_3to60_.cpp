#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    do
    {
        if (a % 3 == 0)
        {
            cout << a << "\n";
        }
        a++;
    } while (a <= 60);
}