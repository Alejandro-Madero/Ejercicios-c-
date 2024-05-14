#include <iostream>
using namespace std;

int main()
{

    bool isFirstNUm = true;
    int pos = 0, counter = 0, num, max;

    while (num != 0)
    {
        counter++;
        cout << "Ingrese un numero: ";
        cin >> num;

        if (num == 0)
            break;

        if (isFirstNUm)
        {
            max = num;
            pos = counter;
            isFirstNUm = false;
            continue;
        }

        if (num > max)
        {
            max = num;
            pos = counter;
        }
    }

    cout << "El mayor numero ingresado es: " << max << " y se encuentra en la posición " << pos << " de la lista.";
    return 0;
}
