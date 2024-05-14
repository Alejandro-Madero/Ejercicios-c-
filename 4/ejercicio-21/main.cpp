#include <iostream>
using namespace std;

int main()
{

    bool isFirstNum = true;
    int num, count = 0, min, max, difference = 0;

    while (difference < 10)
    {
        cout << "Ingrese un numero: ";
        cin >> num;

        if (isFirstNum)
        {
            max = num;
            min = num;
            isFirstNum = false;
        }

        if (num > max)
        {
            max = num;
        }
        else if (num < min)
        {
            min = num;
        }

        difference = max - min;
        count++;
    }

    cout << "La cantidad de numeros de la lista es: " << count;

    return 0;
}
