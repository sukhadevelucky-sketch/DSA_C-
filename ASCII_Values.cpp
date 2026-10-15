#include <iostream>
using namespace std;
int main()
{
    string name = "Lucky";
    for (int i = 0; i < name.length(); i++)
    {
        cout << name[i] << " = " << (int)name[i] << endl;
    }
}