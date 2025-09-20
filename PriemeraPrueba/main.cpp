#include <iostream>

using namespace std;

int main(){

    /* Escribe un programa que lea de la entrada estándar dos números y muestre en la salida estándar
    su suma, resta, multiplicación y división. */

    int n1, n2 , suma = 0, resta = 0 , multiplicacion = 0 , division = 0;

    cout << "ingrese el primer numero:\n ";
    cin >> n1;
    cout << "ingrese el segundo numero: \n";
    cin >> n2;

    cout<< "el resultado de la suma es : " << n1 + n2 << endl;
    cout<< "el resultado de la resta es :" << n1 - n2 << endl;
    cout << "el resultado de la multiplicacion es: " << n1 * n2 << endl;
    cout << "el resultado de la division es: " << n1 / n2 << endl;



    return 0;
}
