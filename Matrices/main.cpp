
// Hacer un programa para rellanar un matriz pidiendo al usuario el número de filas y columnas, posteriormete mostrar la matriz en pantalla.


#include <iostream>

using namespace std;


int main(){


    int filas, columnas, numero;

    cout << "Ingrese el numero de filas deseado: "; cin >> filas ;
    cout << "Ingrese el numero de columnas deseado: "; cin >> columnas;

    int matrizEnteros[filas][columnas]; // generamos la matriz

    //cargamos la matriz con los números iterando sobre eje x y luego y
    for(int x = 0; x < filas; x++ ){
        cout << "Ingrese los numeros de fila " << x + 1 << endl;
        for(int y = 0; y < columnas ; y++){
            cout << "Ingrese el numero para completar la columna: "<< endl;
            cin >> numero;
            matrizEnteros[x][y] = numero;
        }
    }

    //Leemos la matriz.
    cout << "El resultado de la matriz ingresada es" << endl;
    for (int x = 0; x < filas; x++){
        cout << "" <<endl;
        for (int y = 0; y < columnas ; y++){
            cout << matrizEnteros[x][y] << " ";
        }
    }


    return 0;
}
