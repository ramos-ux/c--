#include <iostream>
using namespace std;
int main ()
{
    int a, b;
    cin >> a >> b;
    if (a + b == 5)
    {
        b = b + 3;
        cout << 2 * a + b;
    }
    else
    {
        a = a - 1;
        if ((7 * a + b) % 2 == 0)
    {
        cout << a - b;
    }
    else
    {
        cout << a * b;
    }
    }
    return 0;
}
