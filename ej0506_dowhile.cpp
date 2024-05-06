#include <iostream>
using namespace std;
int main()
{
    int n;
    do
    {
        cout << "ingrese un numero positivo: ";
        cin >> n;
    } while (n<0);

    return 0;
}