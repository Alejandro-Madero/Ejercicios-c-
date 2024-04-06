#include <iostream>
using namespace std;

int main()
{

    int listLength;
    int positiveNumbers = 0;

    cout << "Ingrese la cantidad de numeros de la lista: ";
    cin >> listLength;

    for (int i{0}; i < listLength; i++)
    {
        int n;
        cout << "Ingrese el numero " << i + 1 << " : ";
        cin >> n;

        if (n > 0)
        {
            positiveNumbers++;
        }
    }

    cout << "La cantidad de numeros positivos es: " << positiveNumbers;
    return 0;
}