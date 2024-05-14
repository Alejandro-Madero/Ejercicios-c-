#include <iostream>
using namespace std;

int main()
{

    bool isFirstNum = true;
    int num, max;

    cout << "Ingrese un numero: ";
    cin >> num;

    while (num != 0)
    {

        if (num == 0)
            break;

        if (isFirstNum)
        {
            max = num;
            isFirstNum = false;
            continue;
        }
        else if (num > max)
        {
            max = num;
        }

        cout << "Ingrese otro numero: ";
        cin >> num;
    }

    if (isFirstNum)
    {
        cout << "No se ingreso ningun numero.";
    }
    else
    {
        cout << "El mayor numero ingresado es: " << max;
    }
    return 0;
}
