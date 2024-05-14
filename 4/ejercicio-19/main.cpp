#include <iostream>
using namespace std;

int main()
{

    int num, divisorSum = 0, divisor;

    cout << "Ingrese un numero: ";
    cin >> num;

    divisor = num - 1;

    while (divisor > 0)
    {

        if (num % divisor == 0)
        {
            divisorSum += divisor;
        }

        divisor--;
    }

    if (divisorSum == num)
    {
        cout << "Es un numero PERFECTO!";
    }
    else
    {
        cout << "No es un numero perfecto :(";
    }
    return 0;
}
