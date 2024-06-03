#include <iostream>
using namespace std;
int main()
{
    int a, b, res;
    cout << "Ingrese un numero: ";
    cin >> a;
    cout << "Ingrese otro numero";
    cin >> b;
    res = a%b;
    if (res==0)
    {
        cout << a << " es divisibe entre " << b << "\n";
    }
    else
    {
        cout << a << " no es divisible entre " << b << "\n";
    }



    return 0;
} 