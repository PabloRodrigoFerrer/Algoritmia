#include <iostream>
#include <math.h>

using namespace std;

int main(){

    //Escriba un programa que calcule el valor de: 2^1 + 2^2 + 2^3 + 2^..n
    int numero, suma = 0;
    cout << "Ingrese un numero: "; cin >> numero;

    for(int i = 1 ; i <= numero; i++){
        suma += pow(2,i);
    }


    cout << "\nEl resultado acumulado es " << suma;

    return 0;
}
