#include <iostream>
using namespace std;

int main()
{

    bool hasNumberDivisibleBy7 = false;
    int num, secondToLastOdd = 0, lastOdd = 0;

    while (!hasNumberDivisibleBy7)
    {

        cout << "Ingrese un numero: ";
        cin >> num;

        if (num % 7 == 0)
        {
            hasNumberDivisibleBy7 = true;
        }

        if (num % 2 != 0)
        {
            secondToLastOdd = lastOdd;
            lastOdd = num;
        }
    }

    if (lastOdd == 0)
    {
        cout << "NO se ingresaron numeros impares";
    }
    else if (secondToLastOdd == 0)
    {
        cout << "Ultimo impar: " << lastOdd << endl;
        cout << "Se ingreso un solo numero impar";
    }
    else
    {
        cout << "Ultimo impar: " << lastOdd << endl;
        cout << "Anteultimo impar: " << secondToLastOdd;
    }
    return 0;
}
