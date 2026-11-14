#include <iostream>
using namespace std;
int main()
{
    int check = 0;
    string a = "Java_Programming";
    char b = 'a';
    for (int i = 0; i <= a.length(); i++)
    {
        if (a[i] == b)
        {
            check++;
        }
    }
    cout << " The duplicate of " << b << check << " Times .";
}