#include <iostream>
using namespace std;
int main ()
{
    float num1, num2;
    float mayor, menor;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    bool primero = (num1 >= num2);
    mayor = num1 * primero + num2 * not (primero);
    menor = num2 * primero + num1 * not (primero);
    cout << "El mayor es: " << mayor << endl;
    cout << "El menor es: " << menor << endl;
    return 0;
}