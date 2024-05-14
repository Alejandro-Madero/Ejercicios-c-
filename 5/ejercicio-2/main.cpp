#include <iostream>
using namespace std;

int main()
{

    int primeNumCount = 0;

    for (int i = 0; i < 10; i++)
    {

        int num;
        cout << "Ingrese un numero: ";
        cin >> num;

        int divider = num - 1;
        int dividerCount = 0;

        while (divider > 1 && dividerCount == 0)
        {

            if (num % divider == 0)
            {
                dividerCount += 1;
            }

            divider--;
        }

        if (dividerCount == 0)
        {
            primeNumCount += 1;
        }
    }

    cout << "Se ingresaron " << primeNumCount << " numeros primos.";
    return 0;
}