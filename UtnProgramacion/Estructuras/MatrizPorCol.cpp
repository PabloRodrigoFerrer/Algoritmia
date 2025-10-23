#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{

    int filas = 3;
    int columnas = 4;

    int matriz[filas][columnas] = {{1, 2, 3, 4},
                                   {5, 6, 7, 8},
                                   {9, 10, 11, 12}};

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // transponer la matriz
    for (int i = 0; i < columnas; i++)
    {
        for (int j = 0; j < filas; j++)
        {
            cout << matriz[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
