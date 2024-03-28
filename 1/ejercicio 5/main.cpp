#include <iostream>
using namespace std;

int main()
{
    int alfajorA, alfajorB, alfajorC, total;
    float percentA, percentB, percentC;

    cout << "Ingrese la cantidad de alfajores A vendidos: ";
    cin >> alfajorA;
    cout << "Ingrese la cantidad de alfajores B vendidos: ";
    cin >> alfajorB;
    cout << "Ingrese la cantidad de alfajores C vendidos: ";
    cin >> alfajorC;

    total = alfajorA + alfajorB + alfajorC;
    percentA = alfajorA / (float)total * 100;
    percentB = alfajorB / (float)total * 100;
    percentC = alfajorC / (float)total * 100;

    cout << alfajorA << endl;
    cout << "A: " << percentA << "%" << endl;
    cout << "B: " << percentB << "%" << endl;
    cout << "C: " << percentC << "%" << endl;

    return 0;
}