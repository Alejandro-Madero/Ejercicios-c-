#include <iostream>
using namespace std;

int main()
{
    bool isOrdered = true, isFirstNum = true;
    int num, lastNum;

    cout << "Ingrese un numero: ";
    cin >> num;

    while (num != 0)
    {

        if (isFirstNum)
        {
            lastNum = num;
            isFirstNum = false;
        }
        else if (num >= lastNum && isOrdered)
        {
            lastNum = num;
        }
        else
        {
            isOrdered = false;
        }

        cout << "Ingrese otro numero: ";
        cin >> num;
    }

    if (isOrdered)
    {
        cout << "El conjunto esta ordenado";
    }
    else
    {
        cout << "El conjunto esta desordenado";
    }
    return 0;
}