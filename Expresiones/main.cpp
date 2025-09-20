#include <iostream>

using namespace std;

int main(){

    float n1, n2, resultado = 0;

    cout << "Ingrese el primer numero: "; cin >> n1;
    cout << "Ingrese el segundo numero: "; cin >> n2;

    resultado = (n1 / n2) + 1;

    cout.precision(2);
    cout << "\nEl resultado de la expresion (a/b) + 1 es: " << resultado << endl;


    // escribe la siguiente expresión en c++, a + (b/c)/ d + (e/f)

    float a,b,c,d,e,f;
    resultado = 0;

    cout << "Ingrese el valor de a: "; cin >> a;
    cout << "Ingrese el valor de b: "; cin >> b;
    cout << "Ingrese el valor de c: "; cin >> c;
    cout << "Ingrese el valor de d: "; cin >> d;
    cout << "Ingrese el valor de e: "; cin >> e;
    cout << "Ingrese el valor de f: "; cin >> f;

    resultado = (a + (b/c))/(d + (e/f));

    cout << "El resultado de la expresion es: " << resultado;
    return 0;
}
