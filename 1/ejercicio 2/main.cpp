#include <iostream>
using namespace std;

int main()
{

    int num1, num2, temp;

    cout << "Ingrese el numero A: ";
    cin >> num1;
    cout << "Ingrese el numero B: ";
    cin >> num2;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "Numero A: " << num1 << endl
         << "Numero B: " << num2 << endl;

    return 0;
}
