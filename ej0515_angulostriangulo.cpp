#include <iostream>
using namespace std;
int main()
{
    float alfa, beta, gamma;

    cout << "Ingrese primer angulo: ";
    cin >> alfa;
    cout << "Ingrese segundo angulo: ";
    cin >> beta;
    if (alfa + beta < 180)
    {
        cout << "El tercer angulo es: " << 180 - alfa - beta << "\n";
    }
    else
    {
        cout << "la suma de los dos angulos debe ser menor a 180" << "\n";
    }
    return 0;
}