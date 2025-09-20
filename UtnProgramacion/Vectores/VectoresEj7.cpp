#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

/*7. Ingresar un valor entero N (< 15). A continuación ingresar un conjunto DATO de N elementos.
Generar otro conjunto de dos componentes MEJORDATO donde el primer elemento sea el mayor
valor de DATO y el segundo el siguiente mayor (puede ser el mismo si está repetido). Imprimir el
conjunto MEJORDATO con identificación.*/

void cargarVector(int arreglo[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese un dato: ";
        cin >> arreglo[i];
    }
}

void podioPrimeroSegundo(int arreglo[], int n, int vectorPodio[])
{
    int aux, primero, segundo;

    primero = arreglo[0];
    segundo = arreglo[1];

    if ((primero < segundo) && (n >= 2))
    {
        aux = primero;
        primero = segundo;
        segundo = aux;
    }

    if (n == 2)
    {
        vectorPodio[0] = primero;
        vectorPodio[1] = segundo;
        return;
    }

    for (int i = 2; i < n; i++)
    {
        if (primero < arreglo[i])
        {
            segundo = primero;
            primero = arreglo[i];
        }
        else if (segundo < arreglo[i])
            segundo = arreglo[i];
    }

    vectorPodio[0] = primero;
    vectorPodio[1] = segundo;
}

int main(int argc, char const *argv[])
{
    int N;

    cout << "Ingrese un valor N: ";
    cin >> N;

    int datos[N], podio[2];
    cargarVector(datos, N);
    podioPrimeroSegundo(datos, N, podio);

    cout << "El primer mayor es: " << podio[0] << endl;
    cout << "El segundo mayor es: " << podio[1] << endl;

    return 0;
}
