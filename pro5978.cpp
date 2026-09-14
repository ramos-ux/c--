#include <iostream>
using namespace std;
int main ()
{
    string nombre1, nombre2;
    int a, b;
    cin >> nombre1 >> a;
    cin >> nombre2 >> b;
    if (a > b)
    {
        cout << nombre1;
    }
    else
    {
        cout << nombre2;
    }
    return 0;
}