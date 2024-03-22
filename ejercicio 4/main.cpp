#include <iostream>
using namespace std;

int main()
{

    int seats, takenSeats;
    float percentage;

    cout << "Ingrese la cantidad de asientos del avion: ";
    cin >> seats;
    cout << "Ingrese la cantidad de asientos vendidos: ";
    cin >> takenSeats;

    percentage = takenSeats / static_cast<float>(seats) * 100;

    cout << "El porcentaje de ocupacion es : " << percentage << "%";
    return 0;
}
