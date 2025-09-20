
/* Desarrollar un programa que determine si una matriz es simetrica o no
    Una matriz es simétrica si es cuadrada y si es igual a su matriz trasnpuesta*/


#include <iostream>
#include <string.h>

using namespace std;

int main(){

    int matriz[3][3]= {{8,1,3},{1,7,4},{3,4,9}};

   // int matriz2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    int contadorSim = 0;

    //comparación

//  If(filas == columnas) =>
    for(int x = 0; x < 3; x++){
        for(int j = 0; j < 3; j++){
            if (matriz[x][j] == matriz[j][x]){
                contadorSim++;
            }
        }
    }

    if(contadorSim == 9)
        cout << "Matrices simetricas";
    else
        cout << "Matrices no simetricas";

    return 0;



}
