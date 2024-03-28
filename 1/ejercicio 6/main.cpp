#include <iostream>

using namespace std;

int main()
{

    float incomeWeek1, incomeWeek2, incomeWeek3, incomeWeek4;
    float averageIncome, totalIncome;

    cout << "Ingrese la recaudacion de la semana 1 : ";
    cin >> incomeWeek1;
    cout << "Ingrese la recaudacion de la semana 2 : ";
    cin >> incomeWeek2;
    cout << "Ingrese la recaudacion de la semana 3 : ";
    cin >> incomeWeek3;
    cout << "Ingrese la recaudacion de la semana 4 : ";
    cin >> incomeWeek4;

    totalIncome = incomeWeek1 + incomeWeek2 + incomeWeek3 + incomeWeek4;
    averageIncome = totalIncome / 4;

    cout << "-----------------------" << endl;
    cout << "Recaudacion promedio:  $" << averageIncome << endl;
    cout << "Semana 1            :  " << incomeWeek1 / totalIncome * 100 << "%" << endl;
    cout << "Semana 2            :  " << incomeWeek2 / totalIncome * 100 << "%" << endl;
    cout << "Semana 3            :  " << incomeWeek3 / totalIncome * 100 << "%" << endl;
    cout << "Semana 4            :  " << incomeWeek4 / totalIncome * 100 << "%" << endl;

    return 0;
}