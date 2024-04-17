#include <iostream>
using namespace std;

int main()
{

    int numA, numB, numC, numD, numE, negative, positive, zero;
    positive = negative = zero = 0;

    cout
        << "Ingrese el primer numero: ";
    cin >> numA;
    cout << "Ingrese el segundo numero: ";
    cin >> numB;
    cout << "Ingrese el tercer numero: ";
    cin >> numC;
    cout << "Ingrese el cuarto numero: ";
    cin >> numD;
    cout << "Ingrese el quinto numero: ";
    cin >> numE;

    for (int i = 0; i < 5; i++)
    {

        int numberToCheck;
        switch (i)
        {

        case 0:
            numberToCheck = numA;
            break;

        case 1:
            numberToCheck = numB;
            break;

        case 2:
            numberToCheck = numC;
            break;

        case 3:
            numberToCheck = numD;
            break;

        case 4:
            numberToCheck = numE;
            break;
        }

        if (numberToCheck > 0)
        {
            positive++;
        }
        else if (numberToCheck < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }

    cout << endl
         << "Numeros positivos: " << positive << endl;
    cout << "Numero negativos: " << negative << endl;
    cout << "Ceros : " << zero;

    return 0;
}