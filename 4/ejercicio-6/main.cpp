#include <iostream>
using namespace std;

int main()
{

    int pos = 0, neg = 0, num;

    cout << "Ingrese un numero: ";
    cin >> num;

    while (num != 0)
    {
        if (num > 0)
        {
            pos++;
        }
        else
        {
            neg++;
        }

        cout << "Ingrese otro numero: ";
        cin >> num;
    }

    cout << "positivos: " << pos << endl;
    cout << "negativos: " << neg << endl;
    return 0;
}
