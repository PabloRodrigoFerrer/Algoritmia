#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int numero, dato, intentos = 0;

    srand(time(0));
    dato = 1 + rand()%100;


    do{
        cout << "Ingrese un numero: "; cin >> numero;

        if(numero > dato){
            cout << "\nIngrese un numero menor" << endl;
        }else if (numero < dato){
            cout << "\nIngrese un numero mayor" << endl;
        }

        intentos++;
    }while(numero != dato);


    cout << "\nFELICIDADES ADIVINASTE EL NUMERO" << endl;
    cout << "En solo " << intentos;

    return 0;
}
