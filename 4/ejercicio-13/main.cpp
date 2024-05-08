#include <iostream>
using namespace std;

int main()
{
    bool isFirstOdd = true;
    int firstOdd, lastOdd, num;

    cout << "Ingrese un numero: ";
    cin >> num;

    while (num != 0)
    {

        if (num % 2 != 0)
        {

            if (isFirstOdd)
            {
                firstOdd = num;
                isFirstOdd = false;
            }

            lastOdd = num;
        }

        cout << "Ingrese otro numero: ";
        cin >> num;
    }

    cout << "Primer impar: " << firstOdd << endl;
    cout << "Ultimo impar: " << lastOdd;

    return 0;
}
