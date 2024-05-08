#include <iostream>
using namespace std;

int main()
{

    bool isFirstNum = true, twoConsecutivePos = false;
    int num, lastNum, max;

    cout << "Ingrese un numero: ";
    cin >> num;

    while (!twoConsecutivePos || isFirstNum)
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
        cout << "Ingrese otro Numero: ";
        cin >> num;

        if (num > 0 && lastNum > 0)
            twoConsecutivePos = true;
    }

    cout << "Maximo: " << max;

    return 0;
}