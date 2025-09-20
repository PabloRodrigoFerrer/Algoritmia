
#include <iostream>

using namespace std;
/*3. Ingresar un valor entero N (< 20). A continuación ingresar un conjunto VEC de N componentes.
A partir de este conjunto generar otro FACT en el que cada elemento sea el factorial del elemento
homólogo de VEC. Finalmente imprimir ambos vectores a razón de un valor de cada uno por
renglón*/

int factorial(int numero)
{
    if (numero == 0)
        return 1;

    return numero * factorial(numero - 1);
}

void calcularVectorFactorial(int vector[], int vectorFactorial[], int n)
{
    vector[n];
    for (int i = 0; i < n; i++)
    {
        vectorFactorial[i] = factorial(vector[i]);
    }
}

void mostrarVectores(int vector[], int vectorFactorial[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << vector[i] << ", " << vectorFactorial[i] << endl;
    }
}

int main()
{
    int N;

    cout << "Indique el largo del array: " << endl;
    cin >> N;

    int numeros[N];
    int factoriales[N];

    for (int i = 0; i < N; i++)
    {
        cout << "Ingrese un valor: " << endl;
        cin >> numeros[i]; // cargo el vector
    }

    calcularVectorFactorial(numeros, factoriales, N);

    mostrarVectores(numeros, factoriales, N);

    return 0;
}
