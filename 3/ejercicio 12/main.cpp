

// int main()
// {

//     int negativeMax = numeric_limits<int>::min();
//     int positiveMin = numeric_limits<int>::max();
//     int positiveCount = 0;
//     int negativeCount = 0;

//     for (int i = 0; i < 10; i++)
//     {
//         int num;

//         cout << "Ingrese el numero " << i + 1 << " de la lista: ";
//         cin >> num;

//         if (num < 0 && num > negativeMax)
//         {
//             negativeMax = num;
//             negativeCount++;
//         }
//         else if (num > 0 && num < positiveMin)
//         {
//             positiveMin = num;
//             positiveCount++;
//         }
//     }

//     cout << endl;

//     if (negativeCount > 0)
//     {
//         cout << "El mayor de los numeros negativos ingresados es: " << negativeMax << endl;
//     }
//     else
//     {
//         cout << "No se ingresaron numeros negativos." << endl;
//     }

//     if (positiveCount > 0)
//     {

//         cout << "El menor de los numeros positivos ingresados es: " << positiveMin << endl;
//     }
//     else
//     {
//         cout << "No se ingresaron numeros positivos." << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{

    int negativeMax = 0;
    int positiveMin = 0;

    for (int i = 0; i < 10; i++)
    {

        int num;

        cout << "Ingrese el numero " << i + 1 << " de la lista: ";
        cin >> num;

        if (num > 0 && positiveMin == 0)
        {
            positiveMin = num;
            continue;
        }
        else if (num < 0 && negativeMax == 0)
        {
            negativeMax = num;
            continue;
        }

        if (num < 0 && num > negativeMax)
        {
            negativeMax = num;
        }
        else if (num > 0 && num < positiveMin)
        {
            positiveMin = num;
        }
    }

    cout << endl;

    if (negativeMax != 0)
    {
        cout << "El mayor de los numeros negativos ingresados es: " << negativeMax << endl;
    }
    else
    {
        cout << "No se ingresaron numeros negativos." << endl;
    }

    if (positiveMin != 0)
    {

        cout << "El menor de los numeros positivos ingresados es: " << positiveMin << endl;
    }
    else
    {
        cout << "No se ingresaron numeros positivos." << endl;
    }

    return 0;
}
