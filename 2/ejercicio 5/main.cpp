#include <iostream>
using namespace std;

int main()
{

    float salePrice;

    cout << "Ingrese el valor total de la venta: ";
    cin >> salePrice;

    if (salePrice < 100)
    {
        salePrice *= 0.95;
    }
    else if (salePrice > 500)
    {
        salePrice *= 0.85;
    }
    else
    {
        salePrice *= 0.9;
    }

    cout << "-----------------------------------------" << endl;
    cout << "| El precio final de la venta es : $" << salePrice << " |" << endl;
    cout << "-----------------------------------------";
}