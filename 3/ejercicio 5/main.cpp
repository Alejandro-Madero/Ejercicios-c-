#include <iostream>
using namespace std;

int main()
{

    int fNum, sNum, temp;

    cout << "Ingrese el primer numero: ";
    cin >> fNum;
    cout << "Ingrese el segundo numero: ";
    cin >> sNum;

    if (fNum > sNum)
    {
        temp = sNum;
        sNum = fNum;
        fNum = temp;
    }

    for (int i{fNum + 1}; i < sNum; i++)
    {

        cout << i << " ";
    }
    return 0;
}