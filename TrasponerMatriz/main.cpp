/* Realice un programa que lea una matriz de 3x3 y cree su matriz transpuesta.
La matriz transpuesta es aquella la que la columna i era la fila i de la matriz original.

|1 2 3|   |1 4 7|
|4 5 6| ->|2 5 8|
|7 8 9|   |3 6 9|
*/

#include <iostream>

using namespace std;

int main(){

    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    int matrizTraspuesta[3][3];

    //mostrar matriz original
    cout << "Matriz Original\n";
    for(int x = 0; x < 3; x++){
        for(int j = 0; j < 3; j++){
            cout << matriz[x][j];
        }
        cout << "\n";
    }

    //transponemos la matriz
    for(int x = 0; x < 3; x++){
        for(int j = 0; j < 3; j++){
            matrizTraspuesta[j][x] = matriz[x][j];
        }
    }

    //mostramos la matriz
    cout << "\nMatriz transpuesta\n";
    for(int x = 0; x < 3; x++){
        for(int j = 0; j < 3; j++){
            cout << matrizTraspuesta[x][j];
        }
        cout << "\n";
    }


    return 0;
}

