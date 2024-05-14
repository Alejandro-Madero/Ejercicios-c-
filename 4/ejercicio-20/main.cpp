#include <iostream>
using namespace std;

int main()
{

    bool isFirstEven = true;
    int num, posCount = 1, firstEven, firstEvenPos, lastPrime, lastPrimePos;

    cout << "Ingrese un numero: ";
    cin >> num;

    while (num != 0)
    {

        if (num % 2 == 0 && isFirstEven)
        {
            firstEven = num;
            firstEvenPos = posCount;
            isFirstEven = false;
        }

        int divisor = num, divisorCount = 0;

        while (divisor > 0)
        {

            if (num % divisor == 0)
            {
                divisorCount++;
            }
            divisor--;
        }

        if (divisorCount < 3)
        {
            lastPrime = num;
            lastPrimePos = posCount;
        }

        posCount++;
        cout << "Ingrese otro numero: ";
        cin >> num;
    }

    cout << "Primer numero par: " << firstEven;
    cout << " posicion: " << firstEvenPos << endl;
    cout << "Ultimo primo: " << lastPrime;
    cout << " posicion: " << lastPrimePos;
    return 0;
}
