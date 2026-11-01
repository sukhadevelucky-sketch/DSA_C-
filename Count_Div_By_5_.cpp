#include <iostream>
using namespace std;
int main()
{
    int num, count = 0;
    cout << "Read 10 integers and count how many are divisible by 5." << endl;
    cout << "****Enter the 10 integer****" << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << "Enter the integer : ";
        cin >> num;
        if (num % 5 == 0)
        {
            count++;
        }
    }
    cout << "Thw integer are divisible by 5 :" << count << endl;
}