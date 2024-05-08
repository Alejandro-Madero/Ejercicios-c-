#include <iostream>
using namespace std;

int main()
{

    int firstOdd, secondOdd, oddCounter = 0;
    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    while (num != 0)
    {

        if (num % 2 != 0 && oddCounter < 2)
        {

            if (oddCounter == 0)
            {
                firstOdd = num;
                oddCounter++;
            }
            else if (oddCounter == 1)
            {
                secondOdd = num;
                oddCounter++;
            }
        }

        cout << "Ingrese otro numero: ";
        cin >> num;
    }

    if (oddCounter == 0)
    {
        cout << "No se ingresaron numeros impares";
    }
    else if (oddCounter == 1)
    {
        cout << "Primer impar: " << firstOdd << endl;
        cout << "No se ingreso un segudo numero impar";
    }
    else
    {
        cout << "Primer impar: " << firstOdd << endl;
        cout << "Segundo impar: " << secondOdd;
    }

    return 0;
}