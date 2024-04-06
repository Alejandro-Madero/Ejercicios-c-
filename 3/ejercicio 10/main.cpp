#include <iostream>
using namespace std;

int main()
{

    int tempMax;
    int tempIndex;

    for (int i{0}; i < 10; i++)
    {

        int num;

        cout << "Ingrese el numero " << i + 1 << " de la lista: ";
        cin >> num;

        if (i == 0)
        {
            tempMax = num;
            tempIndex = i + 1;
        }
        else if (num > tempMax)
        {
            tempMax = num;
            tempIndex = i + 1;
        }
    }

    cout << "El mayor numero ingresado es: " << tempMax << " y se encuentra el indice: " << tempIndex;
    return 0;
}