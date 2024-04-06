#include <iostream>
using namespace std;

int main()
{

    float numA, numB, numC, numD, numE, tempGreater, tempLowest;

    cout << "Ingrese el primer numero: ";
    cin >> numA;
    cout << "Ingrese el segundo numero: ";
    cin >> numB;
    cout << "Ingrese el tercer numero: ";
    cin >> numC;
    cout << "Ingrese el cuarto numero: ";
    cin >> numD;
    cout << "Ingrese el quinto numero: ";
    cin >> numE;

    tempGreater = numA;
    tempLowest = numA;

    if (numB > tempGreater)
        tempGreater = numB;
    if (numB < tempLowest)
        tempLowest = numB;
    if (numC > tempGreater)
        tempGreater = numC;
    if (numC < tempLowest)
        tempLowest = numC;
    if (numD > tempGreater)
        tempGreater = numD;
    if (numD < tempLowest)
        tempLowest = numD;
    if (numE > tempGreater)
        tempGreater = numE;
    if (numE < tempLowest)
        tempLowest = numE;

    cout << endl
         << "Menor numero: " << tempLowest << endl;
    cout << "Mayor numero: " << tempGreater << endl;

    return 0;
}