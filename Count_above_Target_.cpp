#include <iostream>
using namespace std;
int main()
{
    int i = 1, n, enter;
    int target, count = 0;
    cout << "Enter the  value (n) :";
    cin >> n;
    cout << "Enter the target value is : ";
    cin >> target;
    cout << "Enter the n integer :" << endl;
    while (i <= n)
    {
        cin >> enter;
        if (enter > target)
        {
            count++;
        }

        i++;
    }
    cout << "The total number greather than targeted value are :" << count;
    return 0;
}