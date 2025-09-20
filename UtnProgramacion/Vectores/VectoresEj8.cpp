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

void mostrarPorLinea(int arreglo[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arreglo[i] << endl;
    }
}

void mostrarDiezPorLinea(int arreglo[], int n)
{
    int iteracion = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arreglo[i] << " ";

        if (iteracion == 10)
        {
            cout << endl;
            iteracion = 0;
        }
        iteracion++;
    }
}

void mostrarCincoPorLineaConPosicion(int arreglo[], int n)
{
    int iteracion = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        cout << "(" << arreglo[i] << "," << i << ")" << " ";

        if (iteracion == 5)
        {
            cout << endl;
            iteracion = 0;
        }
        iteracion++;
    }
}

int main(int argc, char const *argv[])
{
    int N;

    cout << "Ingresar un valor: ";
    cin >> N;

    int arregloGG[N];
    cargarVector(arregloGG, N);

    mostrarPorLinea(arregloGG, N); // a

    cout << endl;
    mostrarDiezPorLinea(arregloGG, N); // b
    cout << endl;

    cout << endl;
    mostrarCincoPorLineaConPosicion(arregloGG, N); // c

    return 0;
}
