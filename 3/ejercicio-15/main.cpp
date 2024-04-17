#include <iostream>
using namespace std;

int main()
{

    int tempLast;
    bool isOrdered = true;

    for (int i = 0; i < 8; i++)
    {

        int num;
        cout << "Ingresar un numero: ";
        cin >> num;

        if (i == 0)
        {
            tempLast = num;
            continue;
        }

        if (num >= tempLast)
        {
            tempLast = num;
        }

        if (num < tempLast)
        {
            isOrdered = false;
        }
    }

    if (isOrdered)
    {
        cout << "La lista esta ordenada";
    }
    else
    {
        cout << "La lista esta desordenada";
    }
    return 0;
}