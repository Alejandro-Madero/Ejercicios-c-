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

    if (numA != numB && numB != numC && numA != numC)
    {
        cout << "El triangulo es escaleno.";
    }
    else if (numA == numB && numB == numC)
    {
        cout << "El triango es equilatero.";
    }
    else
    {
        cout << "El triangulo es isosceles.";
    }

    return 0;
}