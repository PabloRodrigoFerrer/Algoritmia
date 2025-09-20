#include <iostream>

using namespace std;

int main (){

    /* Realice un programa que lea la entrada standard de una persona

        edad : int;
        sexo : char;
        altura : float;
    */
    int edad;
    char sexo;
    float altura;

    cout<< "Ingrese la edad: ";
    cin >> edad;
    cout << "\nIngrese el sexo: ";
    cin >> sexo;
    cout << "\nIngrese la altura: ";
    cin >> altura;


    cout<< "\nLa edad ingresada es: " << edad << endl;
    cout<< "El sexo ingresado es: " << sexo << endl;
    cout<< "La altura ingresada es: "<< altura << "cm" << endl;

    return 0;
}
