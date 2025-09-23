#include <iostream>
using namespace std;

/*
1. Ingresar un valor N (< 25). Generar un arreglo de N componentes en el cual las mismas
contengan los primeros números naturales pares e imprimirlo.
*/
int main()
{
    // ingresar un numero N;

    int N;

    cout << "Ingresar un valor N: ";
    cin >> N;

    int vector[N];

    for (int i = 0; i < N; i++)
    {
        vector[i] = 2 * i;
    }

    for (int i = 0; i < N; i++)
    {
        cout << vector[i] << endl;
    }

    return 0;
}