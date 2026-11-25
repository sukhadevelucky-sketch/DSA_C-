#include <iostream>
using namespace std;
int main()
{
    int num;
    int fix_num = 007;
    cout << "Enter and guess the correct number :";
    cin >> num;

    while (num != fix_num)
    {
        cout << "Enter and guess the correct number :";
        cin >> num;
    }
    cout << "your guess is right....." << endl;
}