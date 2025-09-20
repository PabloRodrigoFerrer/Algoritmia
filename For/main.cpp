/* Realice un programa que solicite de la entrada estándar un entero del 1 al 10 y muestre en la salida standar su tabla de multiplicar.*/

#include <iostream>
#include <string>

using namespace std;

bool soloNumeros(string cadena){

    for(int i = 0; i<cadena.length(); i++){
        if (!isdigit(cadena[i]))
            return false;
    }
    return true;
}

int main(){

        int numero, fin;
        string strNumero, strFin;

        do{
            cout << "SOLO DEBE INGRESAR NUMEROS";
            cout << "\nIngrese un numero que quiera saber su tabla de multiplicar"; cin >> strNumero;
            cout << "Hasta que numero quiere saber la tabla? "; cin >> strFin;

        }while(!soloNumeros(strNumero) || !soloNumeros(strFin));

        numero = stoi(strNumero);
        fin = stoi(strFin);

        for(int i=fin; i>0 ; i--){
            cout << "La multiplicacion "<< numero << "*" << i << " es: " << numero * i << endl;
        }
    return 0;
}
