#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int opc_us, opc_pc, cont_g = 0, cont_p = 0, cont_e = 0;
    // Creacion numero pseudoalatorio
    do
    {
        srand(time(NULL));
        opc_pc = rand() % 3 + 1;
        cout << "\n\ningrese:\n\t1. Piedra\n\t2. Papel\n\t3. Tijera\n\tCualquier otro numero para salir\n";
        cout << "su opcion es: ";
        cin >> opc_us;
        cout << "usuario: " << opc_us << "\ncomputadora: " << opc_pc << "\n";
        switch (opc_pc)
        {
        case 1:
            if (opc_us == 1)
            {
                cont_e++;
                cout << "Empate\n";
            }
            else if (opc_us == 2)
            {
                cont_g++;
                cout << "Gano\n";
            }
            else if (opc_us == 3)
            {
                cont_p++;
                cout << "Perdio\n";
            }
            else
            {
                cout << "Saliendo del juego.....\n";
            }
            break;
        case 2:
            if (opc_us == 1)
            {
                cont_p++;
                cout << "Perdio\n";
            }
            else if (opc_us == 2)
            {
                cont_e++;
                cout << "Empate\n";
            }
            else if (opc_us == 3)
            {
                cont_g++;
                cout << "Gano\n";
            }
            else
            {
                cout << "Saliendo del juego.....\n";
            }
            break;
        case 3:
            if (opc_us == 1)
            {
                cont_g++;
                cout << "Gano\n";
            }
            else if (opc_us == 2)
            {
                cont_p++;
                cout << "Perdio\n";
            }
            else if (opc_us == 3)
            {
                cont_e++;
                cout << "Empate\n";
            }
            else
            {
                cout << "Saliendo del juego.....\n";
            }
            break;
        }

    } while (opc_us == 1 || opc_us == 2 || opc_us == 3);

    cout << "Resultados:\n\tGanados: " << cont_g;
    cout << "\n\tPerdidos: " << cont_p << "\n\tEmpatados: " << cont_e << "\n";


    return 0;
}