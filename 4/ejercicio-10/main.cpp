#include <iostream>
using namespace std;

int main()
{

    bool isFirstNum = true;
    int num, min, max;

    cout << "Ingrese un numero: ";
    cin >> num;

    while (num != 0)
    {

        if (isFirstNum)
        {
            max = num;
            min = num;
            isFirstNum = false;
        }
        else
        {
            if (num > max)
                max = num;
            if (num < min)
                min = num;
        }

        cout << "Ingrese otro numero: ";
        cin >> num;
    }

    if (isFirstNum)
    {
        cout << "No se ingreso ningun numero";
    }
    else
    {
        cout << "Maximo: " << max << endl;
        cout << "Minimo: " << min;
    }
    return 0;
}
