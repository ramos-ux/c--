#include <iostream>
using namespace std;
int main ()
{
    int N, M, A;
    cin >> N >> M >> A;
    if (N != M && N != A && M != A)
    {
        cout << "ella no te ama";
    }
    else
    {
        cout << "ella si te ama";
    }
    return 0;
}