#include <iostream>
using namespace std;

int main()
{

    float num;

    cout << "Ingrese un numero: ";
    cin >> num;

    if (num < 0)
        cout << "El numero es negativo";
    else if (num > 0)
        cout << "El numero es positivo";
    else
        cout << "El numero es cero";

    return 0;
}