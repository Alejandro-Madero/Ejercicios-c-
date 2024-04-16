#include <iostream>
using namespace std;

int main()
{

    int tempMax, tempMin;

    for (int i{0}; i < 10; i++)
    {

        int num;

        cout << "Ingrese el numero " << i + 1 << " de la lista: ";
        cin >> num;

        if (i == 0)
        {
            tempMax = num;
            tempMin = num;
        }

        if (num > tempMax)
        {
            tempMax = num;
        }
        else if (num < tempMin)
        {
            tempMin = num;
        }
    }

    cout << "El menor numero ingresado es: " << tempMin << endl;
    cout << "El mayor numero ingresado es: " << tempMax << endl;
    return 0;
}