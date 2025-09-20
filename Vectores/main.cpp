#include <iostream>

using namespace std;

int main()
{

    // Escribe un programa que dfina un vector de n�meros y sume sus elementos.
    //    int vectorNumeros[6] = {1,4,6,7,2,10};
    //    int suma = 0;
    //
    //    for(int i = 0; i < 6; i++){
    //
    //        suma += vectorNumeros[i];
    //    }
    //
    //    cout << "La suma del vector es igual a: " << suma;

    int vectorNumeros[20];
    int n;
    int input;

    cout << "Ingrese cuantos elementos debe tener el vector: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    { // Ac� cargamos el vector.

        cout << "Ingrese un numero para el vector: ";
        cin >> input;
        vectorNumeros[i] = input;
    }

    for (int i = 0; i < n; i++)
    { // Ac� leemos el vector.

        cout << "\n"
             << vectorNumeros[i] << endl;
        cout << i << endl;
    }

    return 0;
}
