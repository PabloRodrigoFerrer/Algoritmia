
#include <iostream>

using namespace std;
/*4. Ingresar un valor entero N (< 25). A continuación ingresar un conjunto VEC de N componentes.
Si la suma de las componentes resulta mayor que cero imprimir las de índice impar, sino los otros
elementos.*/

int sumarVector(int vector[], int n)
{
    int acumulado = 0;

    for (int i = 0; i < n; i++)
    {
        acumulado += vector[i];
    }

    return acumulado;
}

int main(int argc, char const *argv[])
{
    int N;

    cout << "Ingrese un valor N" << endl;
    cin >> N;

    int arreglo[N];

    for (int i = 0; i < N; i++)
    {
        cout << "Ingrese un valor: " << endl;
        cin >> arreglo[i];
    }

    if (sumarVector(arreglo, N) > 0)
    {
        for (int i = 1; i < N; i = i + 2)
        {
            cout << arreglo[i];
        }
    }
    else
    {
        for (int i = 0; i < N; i = i + 2)
        {
            cout << arreglo[i];
        }
    }

    return 0;
}
