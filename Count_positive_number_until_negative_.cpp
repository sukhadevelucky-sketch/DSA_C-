#include <iostream>
using namespace std;
int main()
{
    int num, count = 0;
    cout << "Enter the number :";
    cin >> num;

    while (num > 0)
    {
        count++;
        cout << "Enter the number :";
        cin >> num;
    }

    cout << "The positive number count is : " << count;
}