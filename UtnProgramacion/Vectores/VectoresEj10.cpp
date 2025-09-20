#include <iostream>

using namespace std;

/*
10. Ingresar dos valores enteros M (< 10) y N (< 15). A continuación ingresar un conjunto A de M
elementos y luego otro B de N elementos. Generar e imprimir:
a) Un conjunto C resultante de la anexión de A y B.
b) Un conjunto D resultante de la anexión de los elementos distintos de cero de A y B.

*/
void cargarVector(int arreglo[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese un dato: ";
        cin >> arreglo[i];
    }
}

void mostrarVector(int arreglo[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arreglo[i] << " ";
    }
    cout << endl;
}

int cantidadCeros(int arreglo[], int n)
{
    int contadorCeros = 0;
    for (int i = 0; i < n; i++)
    {
        if (arreglo[i] == 0)
            contadorCeros++;
    }
    return contadorCeros;
}

int main(int argc, char const *argv[])
{

    int M, N;
    cout << "Ingrese un valor M < 10: ";
    cin >> M;

    cout << "Ingrese un valor N < 15: ";
    cin >> N;

    int vectorA[M], vectorB[N], vectorC[M + N];
    cargarVector(vectorA, M);
    cargarVector(vectorB, N);

    // cargo primera parte vectorC
    for (int i = 0; i < M; i++)
    {
        vectorC[i] = vectorA[i];
    }

    // cargo segunda parte vectorC
    for (int i = 0; i < N; i++)
    {
        vectorC[i + M] = vectorB[i];
    }

    // carga vectorD
    int espaciosVectorD = (M + N) - cantidadCeros(vectorC, N + M);
    int vectorD[espaciosVectorD];
    int ajusteIndice = 0;
    for (int i = 0; i < N + M; i++)
    {
        if (vectorC[i] != 0)
            vectorD[i - ajusteIndice] = vectorC[i];
        else
            ajusteIndice++;
    }

    mostrarVector(vectorA, M);
    mostrarVector(vectorB, N);
    mostrarVector(vectorC, M + N);
    mostrarVector(vectorD, espaciosVectorD);

    return 0;
}
