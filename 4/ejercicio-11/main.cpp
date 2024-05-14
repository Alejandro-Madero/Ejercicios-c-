#include <iostream>
using namespace std;

int main()
{

    bool isFirstPos = true, isFirstNeg = true;
    int minPos, maxNeg, num;

    cout << "Ingrese un numero: ";
    cin >> num;

    while (num != 0)

    {

        if (num > 0)
        {
            if (isFirstPos)
            {
                minPos = num;
                isFirstPos = false;
            }
            else if (num < minPos)
            {
                minPos = num;
            }
        }
        else
        {
            if (isFirstNeg)
            {
                maxNeg = num;
                isFirstNeg = false;
            }
            else if (num > maxNeg)
            {
                maxNeg = num;
            }
        }

        cout << "Ingrese otro numero: ";
        cin >> num;
    }

    if (isFirstNeg)
    {
        cout << "No se ingreso ningun numero negativo" << endl;
    }
    else
    {
        cout << "Mayor negativo: " << maxNeg << endl;
    }

    if (isFirstPos)
    {
        cout << "No se ingreso ningun numero positivo";
    }
    else
    {
        cout << "Menor positivo: " << minPos;
    }
    return 0;
}
