#include <iostream>
using namespace std;

int main()
{
    bool isFirstNum = true;
    int num, max, lastNum = 0;

    cout << "Ingrese un numero: ";
    cin >> num;

    while (num != lastNum || isFirstNum)
    {

        if (isFirstNum)
        {
            max = num;
            isFirstNum = false;
        }
        else if (num > max)
        {
            max = num;
        }

        lastNum = num;

        cout << "Ingrese otro numero: ";
        cin >> num;
    }

    cout << endl
         << "Numero maximo ingresado: " << max;

    return 0;
}