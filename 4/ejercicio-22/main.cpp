#include <iostream>
using namespace std;

int main()
{

    int num, lastNum, evenCount = 0, ternaryCount = 0, totalTernary = 0;

    cout << "Ingrese un numero: ";
    cin >> num;
    lastNum = num;

    while (evenCount < 5)
    {
        if (num % 2 == 0)
        {
            evenCount++;
        }

        if (lastNum < 0 && num >= 0)
        {
            ternaryCount = 0;
            continue;
        }

        if (num < 0)
        {
            ternaryCount++;
        }

        if (ternaryCount == 3)
        {
            totalTernary++;
            ternaryCount = 0;
        }
        lastNum = num;
        cout << "Ingrese otro numero: ";
        cin >> num;
    }

    cout << "Cantidad de ternas negativas: " << totalTernary;

    return 0;
}
