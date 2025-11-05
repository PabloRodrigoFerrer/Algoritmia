#include <iostream>

using namespace std;

void OrdenarPorInsertionSort(int vec[], int n)
{
    int k;
    int j;

    for (int i = 1; i < n; i++)
    {
        k = vec[i];
        j = i - 1;

        while (k < vec[j] && j >= 0)
        {
            vec[j + 1] = vec[j];
            j--;
        }
        vec[j + 1] = k;
    }
}

void OrdenarPorBurbujeo(int vec[], int n)
{
    int aux;
    for (int i = 0; i < 14 - 1; i++)
    {
        for (int j = 0; j < 14 - i - 1; j++)
        {
            if (vec[j] > vec[j + 1])
            {
                aux = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = aux;
            }
        }
    }
}

void OrdenarPorBurbujeoMejorado(int vec[], int n)
{
    int i = 0, aux;
    bool ordenado = false;
    while (i < n && !ordenado)
    {
        ordenado = true;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (vec[j] > vec[j + 1])
            {
                aux = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = aux;

                if (ordenado)
                    ordenado = false;
            }
        }
        i++;
    }
}

int BusquedaSecuencial(int vec[], int n, int valor)
{
    for (int i = 0; i < n; i++)
    {
        if (vec[i] == valor)
            return i;
    }

    return -1;
}

int BusquedaBinaria(int vec[], int n, int valor)
{
    int mitad;
    int inicio = 0;
    int final = n - 1;

    while (final >= inicio)
    {
        mitad = inicio + (final - inicio) / 2;

        if (vec[mitad] == valor)
            return mitad;

        if (vec[mitad] > valor)
            final = mitad - 1;
        else
            inicio = mitad + 1;
    }

    return -1;
}

int main()
{
    int miVector[14] = {20, 15, 14, 80, 63, 21, 40, 38, 29, 4, 1, 13, 69, 47};

    // ordenar por insertion sort
    // OrdenarPorInsertionSort(miVector, 14);

    // ordenar por Burbujeo
    // OrdenarPorBurbujeo(miVector, 14);

    // ordenar por burbujeo mejorado..
    // OrdenarPorBurbujeoMejorado(vector, 14);

    // buscar secuencial un valor ej 80

    // buscar implementando busqueda binaria ( previamete ordenamos el vector ), numero a buscar ejemplo 80

    // muestro vector
    // for (int i = 0; i < 14; i++)
    // {
    //     cout << vector[i] << " ";
    // }

    return 0;
}
