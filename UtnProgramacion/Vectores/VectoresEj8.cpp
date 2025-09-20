#include <iostream>

using namespace std;

/*8. Ingresar un valor entero N (< 25). A continuación ingresar un conjunto GG de N elementos.
Imprimir el arreglo en orden inverso generando tres estrategias para imprimir los elementos a
razón
de: a) Uno por línea, b) Diez por línea, c) Cinco por línea con identificación
*/

void cargarVector(int arreglo[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese un dato: ";
        cin >> arreglo[i];
    }
}

int main(int argc, char const *argv[])
{
    int N;

    cout << "Ingresar un valor: ";
    cin >> N;

    int arregloGG[N];
    cargarVector(arregloGG, N);

    for (int i = N - 1; i >= 0; i--)
    {
        cout << arregloGG[i] << endl;
    }

    return 0;
}
