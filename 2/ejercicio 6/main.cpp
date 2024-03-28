#include <iostream>
using namespace std;

int main()
{

    float numA, numB, numC;

    cout << "Ingrese el primer numero: ";
    cin >> numA;
    cout << "Ingrese el segundo numero: ";
    cin >> numB;
    cout << "Ingrese el tercer numero: ";
    cin >> numC;

    if (numA == numB && numB == numC)
    {
        cout << "Los tres numeros ingresados son iguales";
    }

    return 0;
}