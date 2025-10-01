#include <iostream>
using namespace std;

/* 2. Ingresar un valor entero N (< 30) y a continuación un conjunto de N elementos. Si el último
    elemento del conjunto tiene un valor menor que 10 imprimir los negativos y en caso contrario los
    demás.
*/

int main()
{

    int N;

    cout << "ingrese un valor N" << endl;
    cin >> N;

    // vector cargado
    int arreglo[N];
    for (int i = 0; i < N; i++)
    {
        cout << "ingrese valores " << endl;
        cin >> arreglo[i];
    }

    int ultimo = arreglo[N - 1];
    if (ultimo < 10)
    {
        for (int iteracion = 0; iteracion < N; iteracion++)
        {
            if (arreglo[iteracion] < 0)
            {
                cout << arreglo[iteracion];
            }
        }
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            if (arreglo[i] > 0)
            {
                cout << arreglo[i];
            }
        }
    }

    return 0;
}