#include <iostream>
using namespace std;

int main()
{
    int olderThan30 = 0;
    float totalHeight30Plus = 0;
    float averageHeight30Plus = 0;
    int olderThan30And180Plus = 0;
    int personsBtn170And180 = 0;
    int twentyThirtyOrFourty = 0;
    float height = 0;
    int age = 0;

    for (int i = 0; i < 5; i++)
    {

        cout << "Ingresar la edad: ";
        cin >> age;
        cout << "Ingresar la altura: ";
        cin >> height;

        if (age > 30)
        {
            olderThan30++;
            totalHeight30Plus += height;

            if (height > 1.8)
            {
                olderThan30And180Plus++;
            }
        }

        if (age == 20 || age == 30 || age == 40)
        {
            twentyThirtyOrFourty++;
        }

        if (height >= 1.7 && height <= 1.8)
        {
            personsBtn170And180++;
        }
    }

    if (olderThan30 > 0)
    {
        averageHeight30Plus = totalHeight30Plus / olderThan30;
    }

    cout << "Cantidad de personas mayores a 30 que miden mas de 1.8: ";
    cout << olderThan30And180Plus << endl;
    cout << "Promedio de altura personas mayores de 30: " << averageHeight30Plus << " m" << endl;
    cout << "Cantidad de personas entre 1.7m y 1.8m de altura: " << personsBtn170And180 << endl;
    cout << "Cantidad de personas de 20, 30 o 40 anos de edad: " << twentyThirtyOrFourty;

    return 0;
}