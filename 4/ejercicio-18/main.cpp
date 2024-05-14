#include <iostream>
using namespace std;

int main()
{

    int num, divisorCount = 0;

    cout << "Ingrese un numero para conocer si es primo: ";
    cin >> num;

    int divisor = num;

    while (divisor > 0)
    {

        if (num % divisor == 0)
        {
            divisorCount++;
        }

        if (divisorCount > 2)
            break;
        divisor--;
    }

    if (divisorCount > 2)
    {

        cout << "El numero no es primo";
    }
    else
    {
        cout << "El numero es primo";
    }
    return 0;
}
