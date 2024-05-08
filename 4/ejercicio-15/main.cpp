#include <iostream>
using namespace std;

int main()
{

    bool isFirstNum = true;
    int num, max, secondMax;

    cout << "Ingrese un numero: ";
    cin >> num;

    while (num != 0)
    {

        if (isFirstNum)
        {
            max = num;
            isFirstNum = false;
        }
        else if (num > max)
        {
            secondMax = max;
            max = num;
        }
        else if (num > secondMax)
        {
            secondMax = num;
        }

        cout << "Ingrese otro numero: ";
        cin >> num;
    }

    cout << "El numero maximo ingresado es: " << max << endl;
    cout << "El segundo maximo es: " << secondMax;
    return 0;
}