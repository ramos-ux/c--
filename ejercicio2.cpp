#include <iostream>
using namespace std;
int main ()
{
    int a = 5;
    int b = 10;
    int c = (a++ + ++b) * 2;
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
    cout << "C = " << c << endl;
    return 0;
}