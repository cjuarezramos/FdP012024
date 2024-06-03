#include <iostream>
using namespace std;
string paroimpar(int x);//declaro funcion paroimpar
string positivo(int x);// declaro funcion positivo
int main()
{
    int a;
    string sal1,sal2;
    // Ingrese del numero
    cout << "ingrese numero entero: ";
    cin >> a;
    // definir si es par o impar
    sal1 = paroimpar(a);
    // definir si negativo o positivo
    sal2 = positivo(a);
    cout << "El numero " << a << " es " << sal1 <<" y " << sal2 <<"\n";

    return 0;
}
string paroimpar(int x)
{
    string var_sal;//variable de retorno
    int impar = x%2;
    if (impar)
    {
        var_sal = "impar";
    } 
    else 
    {
        var_sal = "par";
    }
    return var_sal;
}
string positivo(int x)
{
    string var_sal;
    if (x>0)
    {
        var_sal = "positivo";
    }
    else 
    {
        var_sal = "negativo";
    }
    return var_sal;
}