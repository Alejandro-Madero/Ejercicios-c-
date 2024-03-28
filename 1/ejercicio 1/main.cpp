#include <iostream>
using namespace std;

int main()
{
    int hours, value, salary;

    cout << "Ingrese la cantidad de horas trabajadas: ";
    cin >> hours;
    cout << "Ingrese el valor de cada hora: ";
    cin >> value;
    salary = hours * value;
    cout << "El salario del trabajador sera: $" << salary;
    return 0;
}