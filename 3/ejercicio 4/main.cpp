#include <iostream>
using namespace std;

int main()
{

    int userNum;

    cout << "Ingrese un numero: ";
    cin >> userNum;

    for (int i{1}; i < userNum; i++)
    {

        cout << i << " ";
    }
    return 0;
}