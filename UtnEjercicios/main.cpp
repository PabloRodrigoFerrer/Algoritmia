#include <iostream>

using namespace std;

int main()
{
    int numUno, numDos, resultado;
    int opcion;
    string mensaje = "";
    bool ejecutar = true;

    cout << "-------- OPERACIONES ENTRE DOS NUMEROS ----------" << endl;

    while(ejecutar){

        cout << endl;
        cout << "Que operacion quiere realizar?" << endl;
        cout << "1. Sumar" << endl;
        cout << "2. Restar" << endl;
        cout << "3. Dividir" << endl;
        cout << "4. Multiplicar" << endl;
        cin >> opcion;

        cout << endl;
        cout << "Ingrese el primer numero" << endl;
        cin >> numUno;

        cout << "Ingrese el segundo numero" << endl;
        cin >> numDos;

        switch(opcion){

            case 1:

                resultado = numUno + numDos;
                mensaje = "El resultado de la suma es: ";
                break;

            case 2:

                resultado = numUno - numDos;
                mensaje = "El resultado de la resta es: ";
                break;

            case 3:

                resultado = numUno / numDos;
                mensaje = "El resultado de la division es: ";
                break;

            case 4:

                resultado = numUno * numDos;
                mensaje = "El resultado de la multiplicacion es: ";
                break;

            default:

            cout << "Ingrese una opción valida";
            break;
        }

        cout << endl;
        cout << mensaje << resultado << endl;

        cout << endl;
        cout << "Desea realizar otra operacion?" << endl;
        cout << "1. Realizar otra operacion" << endl;
        cout << "2. Salir" << endl;

        cin >> opcion;

        if(opcion == 2) ejecutar = false;
    }

    return 0;
}
