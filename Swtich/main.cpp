#include <iostream>

using namespace std;

int main (){

    int n;

    cout << "Digite un numero del 1 al 5: "; cin >> n;

    switch(n){
        case 1:{
        cout << "El numero es el 1";
        break;
        }
        case 2: {
        cout << "El numero es el 2";
        break;
        }
        case 3: {
        cout << "El numero es el 3";
        break;
        }
        case 4: {
        cout << "El numero es el 4";
        break;
        }
        case 5: {
        cout << "El numero es el 5";
        break;
        }
        default:{
        cout << "Elige un numero entre 1 y 5";
        break;
        }
    }
    return 0;
}
