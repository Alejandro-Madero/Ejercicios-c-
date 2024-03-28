#include <iostream>
using namespace std;

int main()
{
    const int salary = 5000;
    const int prize = 700;
    int qty, totalSalary;

    cout << "ingrese la cantidad de autos vendidos: ";
    cin >> qty;

    totalSalary = salary + qty * prize;

    cout << "El salario total sera $" << totalSalary;

    return 0;
}