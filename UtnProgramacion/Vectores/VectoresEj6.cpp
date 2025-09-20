#include <iostream>

using namespace std;

/*6. Ingresar un valor entero N (< 40). A continuación ingresar un conjunto VALOR de N elementos.
Determinar e imprimir el valor máximo y la posición del mismo dentro del conjunto. Si el máximo
no es único, imprimir todas las posiciones en que se encuentra*/

void mostrarVector(int arreglo[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arreglo[i] != 0)
        {
            cout << arreglo[i] << " ";
        }
    }
    cout << endl;
}

void cargarVector(int arreglo[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese un valor: ";
        cin >> arreglo[i];
    }
}

void limpiarVector(int arreglo[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arreglo[i] = 0;
    }
}

void mayorConPosicion(int arreglo[], int n, int posicion[], int &mayor)
{
    mayor = arreglo[0];

    for (int i = 0; i < n; i++)
    {
        if (mayor < arreglo[i])
        {
            mayor = arreglo[i];

            limpiarVector(posicion, n);
            posicion[0] = i + 1;
        }
        else if (mayor == arreglo[i])
        {
            posicion[i] = i + 1;
        }
    }
}

int main()
{
    int N;
    cout << "******* Ingrese un numero N *******" << endl;
    cin >> N;

    int mayor, posiciones[N], arreglo[N];

    cargarVector(arreglo, N);
    mayorConPosicion(arreglo, N, posiciones, mayor);

    cout << "------------------------" << endl;
    cout << "El número Mayor es: " << mayor << endl;
    cout << "Fue ingresado en la posicion/es: ";
    mostrarVector(posiciones, N);

    return 0;
}
