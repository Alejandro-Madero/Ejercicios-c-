#include <iostream>
using namespace std;

int main()
{

    bool isFirstEven = true;
    int num, maxEven;

    cout << "Ingrese un numero: ";
    cin >> num;

    while (num != 0)
    {

        if (isFirstEven)
        {
            maxEven = num;
            isFirstEven = false;
            continue;
        }

        if (num > maxEven)
        {
            maxEven = num;
        }

        cout << "Ingrese otro numero: ";
        cin >> num;
    }

    if (isFirstEven)
    {
        cout << "No se ingreso ningun numero";
    }
    else
    {
        cout << "El mayor numero par ingresado es: " << maxEven;
    }

    return 0;
}
