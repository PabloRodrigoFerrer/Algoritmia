#include <iostream>

using namespace std;

/*9. Ingresar un valor entero N (< 40). A continuación ingresar un conjunto A y luego otro conjunto B
ambos de N elementos. Generar un arreglo C donde cada elemento se forme de la siguiente
forma: C[1] = A[1]+B[N] C[2] = A[2]+B[N-1]
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

int main(int argc, char const *argv[])
{
    int N;
    cout << "Ingrese un valor N: ";
    cin >> N;

    int vectorA[N], vectorB[N], vectorC[N];

    cout << "Cargar vector A " << endl;
    cargarVector(vectorA, N);

    cout << "Cargar vector B " << endl;
    cargarVector(vectorB, N);

    for (int i = 0; i < N; i++)
    {
        vectorC[i] = vectorA[i] + vectorB[(N - 1) - i];
    }

    mostrarVector(vectorA, N);
    mostrarVector(vectorB, N);
    mostrarVector(vectorC, N);

    return 0;
}
