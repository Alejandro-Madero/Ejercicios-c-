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

    float percPositive = positiveNums * 100 / 10;
    float percNegative = negativeNums * 100 / 10;
    float percZeroes = zeroes * 100 / 10;

    cout << endl
         << "% numeros positivos: " << percPositive << "%" << endl;
    cout << "% numeros negativos: " << percNegative << "%" << endl;
    cout << "% ceros            : " << percZeroes << "%" << endl;
    return 0;
}
