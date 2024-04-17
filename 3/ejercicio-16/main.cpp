#include <iostream>
using namespace std;

int main()
{

    int max, secondMax;

    for (int i = 0; i < 5; i++)
    {
        int num;
        cin >> num;

        if (i == 0)
        {
            max = num;
            continue;
        }

        if (num > max)
        {
            int temp = max;
            max = num;
            secondMax = temp;
        }
        else if (num > secondMax)
        {
            secondMax = num;
        }
    }

    cout << "numero maximo: " << max << endl;
    cout << "Segundo maximo: " << secondMax << endl;
    return 0;
}