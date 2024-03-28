#include <iostream>
using namespace std;

int main()
{

    int num1, num2;

    cout << "Ingrese el primero numero: ";
    cin >> num1;
    cout << "Ingrese el primero numero: ";
    cin >> num2;

    cout << num1 << " " << num2 << endl;

    if (num1 > num2)
    {
        cout << num1 - num2;
    }
    else
        cout << num2 - num1;

    return 0;
}
