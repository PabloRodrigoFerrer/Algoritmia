#include <iostream>
using namespace std;

/*
Ejercicio 4
Dado el radio de un círculo calcular e informar:
a) El área del círculo (se obtiene multiplicando el radio al cuadrado por el número Pi)
b) El perímetro del círculo (se obtiene multiplicando el diámetro por el número Pi)
*/

int main()
{
    const int radio = 10;
    const float pi = 3.14;

    float area;
    float perimetro;

    // a
    area = (radio * radio) * pi;
    // b
    perimetro = (radio * 2) * pi;

    cout << "El area es : " << area;
    cout << "El perimetro es: " << perimetro;

    return 0;
}