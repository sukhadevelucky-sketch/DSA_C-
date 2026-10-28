#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        int num;
        num = (i * i) * i;
        cout << " cube of " << i << " = " << num << endl;
    }
}