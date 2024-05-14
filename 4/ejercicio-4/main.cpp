#include <iostream>
using namespace std;

int main()
{

    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    int counter = 1;

    while (counter <= num)
    {
        cout << counter << endl;
        counter++;
    }

    return 0;
}
