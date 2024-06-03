#include<iostream>
using namespace std;
// Las funciones se declaran antes del main
int suma(int x, int y)
{
    return x+y;
}

int main()
{
    int a,b,opc;// declaro variables que deseo utilizar en mi programa
    // Ingreso primer numero
    cout << "Ingrese numero entero a= ";
    cin >> a;
    // Ingreso segundo numero
    cout << "Ingrese numero entero b= ";
    cin >> b;

    cout << "Elija que opcion desea: \n\t1. Sumar\n\tOtro numero: salir\n";
    cout << "Su opcion es: ";
    cin >> opc;

    switch (opc)
    {
    case 1:
        cout << "El resultado de " << a << " + "<< b <<" es " << suma(a,b);
        break;
    
    default:
        cout << "No hice nada, salu";
        break;
    }


    return 0;
}
