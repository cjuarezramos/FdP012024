#include <iostream>
using namespace std;
// Funcion de indicaciones
void instruccion(void)
{
    cout << "Este programa explica el uso de funcion void";
    cout << "\nque void implica que no hay variable de retorno o argumentos de entrada";
    cout << "\ntambien esta el uso de arreglos de multiples dimensiones";
    cout << "\nEl ejemplo es calculo de nota final para varios estudiantes\n";
}
int main()
{
    // Variables que requiero en el programa
    int m; // cantidad de alumnos
    int n = 6; // las notas por alumno y para fdp son 6;
    float Ponderaciones[n]={0.15,0.2,0.1,0.1,0.2,0.25}; // las ponderaciones de cada nota de FdP
    cout << "Cuantos alumnos son: ";
    cin >> m;
    string nombres[m]; // nombres de estudiantes
    float notas[m][n]; // arreglo de dos dimensiones para guardar notas de estudiantes.
    // pedir nombres y notas
    float notafinal[m];
    for (int i=0;i<m;i++)
    {
        cout << "Nombre del estudiante " << i+1 << ": ";
        cin >> nombres[i];
        cout << nombres[i] <<" P1: ";
        cin >> notas[i][0];
        cout << nombres[i] <<" P2: ";
        cin >> notas[i][1];
        cout << nombres[i] <<" C1: ";
        cin >> notas[i][2];
        cout << nombres[i] <<" C2: ";
        cin >> notas[i][3];
        cout << nombres[i] <<" Lab: ";
        cin >> notas[i][4];
        cout << nombres[i] <<" Proyecto: ";
        cin >> notas[i][5];
    }
    notafinal = calculo_notafin(notas,Ponderaciones);

    for (int i=0;i<n;i++)
    {
        cout << nombres[i] << " su nota final es: " << notafinal[i] << "\n";
    }




    instruccion();
    return 0;
}