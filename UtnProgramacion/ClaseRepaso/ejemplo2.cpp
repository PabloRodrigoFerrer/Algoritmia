#include <iostream>
#include <vector>

using namespace std;
#define MAX_FILAS 100
#define MAX_COLS 100

void cargarMatriz(int matriz[][MAX_COLS], int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << "Ingrese un valor: ";
            cin >> matriz[i][j];
        }
    }
}

int main()
{
    int N = 3;
    int M = 3;

    int matriz[MAX_FILAS][MAX_COLS];

    cargarMatriz(matriz, N, M);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
