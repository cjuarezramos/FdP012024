#include <iostream>
using namespace std;

int main(int argc,char *argv[])
{
    int x;
    int *apuntador = &x; //Creamos un apuntador a la memoria de x
    cout << "Ingrese un numero entero: ";
    cin >> *apuntador; // Almacenamos en la memoria el dato

    delete [] apuntador; //Después de operar con punteros es necesario liberar la memoria.
    apuntador = NULL;

    cout << "Usted ingreso el numero: " << x << "\n";
    return 0;
}