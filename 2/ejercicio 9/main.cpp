#include <iostream>
using namespace std;

int main()
{

    float numA, numB, numC, numD, numE, tempGreater;

    cout << "Ingrese el primer numero: ";
    cin >> numA;
    cout << "Ingrese el segundo numero: ";
    cin >> numB;
    cout << "Ingrese el tercer numero: ";
    cin >> numC;

    tempGreater = numA;

    if (numB > tempGreater)
        tempGreater = numB;
    if (numC > tempGreater)
        tempGreater = numC;

    cout << tempGreater;
    return 0;
}

// Otra solucion sin usar bucles:

// int main()
// {

//     float numA, numB, numC, numD, numE;

//     cout << "Ingrese el primer numero: ";
//     cin >> numA;
//     cout << "Ingrese el segundo numero: ";
//     cin >> numB;
//     cout << "Ingrese el tercer numero: ";
//     cin >> numC;

//     if (numA <= numB && numB < numC)
//     {
//         cout << numC;
//     }
//     else if (numA <= numB && numB > numC)
//     {
//         cout << numB;
//     }
//     else if (numA > numB && numA > numC)
//     {
//         cout << numA;
//     }
//     else
//     {
//         cout << numC;
//     }

//     return 0;
// }