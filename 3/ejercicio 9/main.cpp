#include <iostream>
using namespace std;

int main()
{

    int tempMax;

    for (int i{0}; i < 10; i++)
    {

        int num;

        cout << "Ingrese un numero: ";
        cin >> num;

        if (i == 0)
        {
            tempMax = num;
            continue;
        }
        else if (num > tempMax)
        {
            tempMax = num;
        }
    }

    cout << "El mayor numero ingresado es : " << tempMax;
    return 0;
}