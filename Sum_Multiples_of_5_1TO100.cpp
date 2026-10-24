#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    for (int i = 5; i <= 100; i += 5)
    {
        sum = sum + i;
    }
    cout << "the sum of multiples of 5 from 1 to 100 = " << sum;
}