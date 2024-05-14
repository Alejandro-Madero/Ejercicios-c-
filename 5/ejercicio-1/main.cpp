#include <iostream>
using namespace std;

int main()
{

    int perfectNumCount = 0;

    for (int i = 0; i < 10; i++)
    {

        int num;
        cout << "Ingrese un numero: ";
        cin >> num;

        int divider = num - 1;
        int dividerSum = 0;

        while (divider > 0)
        {
            if (num % divider == 0)
            {
                dividerSum += divider;
            }

            divider--;
        }

        if (num == dividerSum)
        {
            perfectNumCount += 1;
        }
    }

    cout << "Se ingresaron " << perfectNumCount << " numeros perfectos.";

    return 0;
}