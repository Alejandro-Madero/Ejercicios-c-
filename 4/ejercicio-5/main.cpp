#include <iostream>
using namespace std;

int main()
{

    int min, max;

    cout << "Ingrese un numero: ";
    cin >> min;
    cout << "Ingrese otro numero: ";
    cin >> max;

    if (min > max)
    {
        int temp = min;

        min = max;
        max = temp;
    }

    int counter = min + 1;

    while (counter < max)
    {

        cout << counter << " ";
        counter++;
    }
    return 0;
}
