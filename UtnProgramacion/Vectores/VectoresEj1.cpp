#include <iostream>
using namespace std;

/*
1. Ingresar un valor N (< 25). Generar un arreglo de N componentes en el cual las mismas
contengan los primeros números naturales pares e imprimirlo.
*/
int main()
{
    int N;

    cout << "Ingrese un valor N para el tamaño del vector: " << endl;
    cin >> N;

    int myVector[N];
    for (int i = 0; i < N; i++)
    {
        i == 0 ? myVector[i] = i : myVector[i] = 2 * i;
    }

    for (int i = 0; i < N / 2; i++)
    {
        cout << myVector[i] << endl;
    }

    return 0;
}