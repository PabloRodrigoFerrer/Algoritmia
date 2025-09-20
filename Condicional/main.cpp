#include <iostream>

using namespace std;

int main(){
    /*int numero;
    int dato = 5;

    cout << "Ingrese un numero: "; cin>> numero;

    if (numero != dato){
        cout << "\nEl numero es distinto de 5";
    }else{
        cout << "\nEl numero es igual a 5";
    }*/

  /*  char vocal;
    cout << "Ingrese una vocal: "; cin >> vocal;

    if(vocal == 'a' or vocal == 'e' or vocal =='i' or vocal == 'o' or vocal == 'u')
        cout << "La vocal es minuscula";
    else
        cout << "La vocal es mayuscula";
    */

    char vocal;
    cout << "Ingrese una vocal: "; cin >> vocal;

    switch(vocal){
        case 'a':;
        case 'e':;
        case 'i':;
        case 'o':;
        case 'u': cout << "\nLa vocal es minuscula";break;
        default: cout <<"\nLa vocal es mayuscula";break;
    }

    return 0;
}
