#include <iostream>

using namespace std;

/*5. Ingresar un valor entero N (< 30). A continuación ingresar un conjunto UNO y luego otro
conjunto DOS, ambos de N componentes. Generar e imprimir otro conjunto TRES intercalando los
valores de posición impar de DOS y los valores de posición par de UNO.*/

void mostrarVector(int arreglo[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arreglo[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    int N;

    cout << "Ingrese un valor N: " << endl;
    cin >> N;

    int arregloUno[N];
    int arregloDos[N];

    for (int i = 0; i < N; i++)
    {
        cout << "Ingrese un valor para VectorUno: " << endl;
        cin >> arregloUno[i];

        cout << "Ingrese un valor para VectorDos: " << endl;
        cin >> arregloDos[i];
    }

    int arregloTres[N];
    for (int i = 0; i < N; i++) // cargo arreglo tres segun precondición
    {
        if (i % 2 == 0)
        {
            arregloTres[i] = arregloUno[i];
        }
        else
        {
            arregloTres[i] = arregloDos[i];
        }
    }

    // muestro vectores

    cout << "******* VECTOR 1 *********" << endl;
    mostrarVector(arregloUno, N);

    cout << endl
         << "******* VECTOR 2 *********" << endl;
    mostrarVector(arregloDos, N);

    cout << endl
         << "******* VECTORES *********" << endl;
    mostrarVector(arregloTres, N);

    return 0;
}
