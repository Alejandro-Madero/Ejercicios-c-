#include <iostream>
using namespace std;

int main()
{

    int positiveNums = 0;
    int negativeNums = 0;
    int zeroes = 0;

    for (int i{0}; i < 10; i++)
    {

        int num;
        cout << "Ingrese un numero: ";
        cin >> num;

        if (num > 0)
        {
            positiveNums++;
        }
        else if (num < 0)
        {
            negativeNums++;
        }
        else
        {
            zeroes++;
        }
    }

    cout << endl
         << "Numeros positivos: " << positiveNums << endl;
    cout << "Numeros negativos: " << negativeNums << endl;
    cout << "ceros            : " << zeroes << endl;
    return 0;
}
