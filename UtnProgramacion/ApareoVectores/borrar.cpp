#include <stdio.h>
#include <iostream>
using namespace std;

struct Alumno
{
    int legajo;
    string nombre;
};

struct Juego
{
    int codigo;
    int stock;
    string titulo;
    string consola;
};

struct Consola
{
    string consola;
    int cantJuegos;
};

void ordenarInsertionSort(int vec[], int n)
{
    int j = 0;
    int key;
    for (int i = 1; i < n; i++)
    {
        key = vec[i];
        j = i - 1;

        while (vec[j] > key && j >= 0)
        {
            vec[j + 1] = vec[j];
            j--;
        }

        vec[j + 1] = key;
    }
}

void Apareo(Alumno vecA[], int n, Alumno vecB[], int m, Alumno vecC[], int &k)
{
    int i = 0, j = 0;
    k = 0;

    while (i < n && j < m)
    {

        if (vecA[i].legajo < vecB[j].legajo)
        {
            vecC[k] = vecA[i];
            i++;
        }
        else
        {
            vecC[k] = vecB[j];
            j++;
        }

        k++;
    }

    while (i < n)
    {
        vecC[k] = vecA[i];
        i++;
        k++;
    }

    while (j < m)
    {
        vecC[k] = vecB[j];
        j++;
        k++;
    }
}

void ordenarPorConsola(Juego vec[], int n)
{
    int j = 0;
    Juego key;
    for (int i = 1; i < n; i++)
    {
        key = vec[i];
        j = i - 1;

        while (vec[j].consola > key.consola && j >= 0)
        {
            vec[j + 1] = vec[j];
            j--;
        }

        vec[j + 1] = key;
    }
}

void GenerarJuegosPorConsola(Juego juegos[], int n, Consola juegosPorConsola[], int &m)
{
    m = 0;
    int i = 0, acuJuegosPorConsola = 0;
    string key;

    while (i < n)
    {
        key = juegos[i].consola;
        acuJuegosPorConsola = 0;
        while (i < n && key == juegos[i].consola)
        {
            acuJuegosPorConsola++;
            i++;
        }

        juegosPorConsola[m].consola = key;
        juegosPorConsola[m].cantJuegos = acuJuegosPorConsola;
        m++;
    }
}

int main()
{
    int m = 100;
    Juego juegos[6] = {
        {1, 10, "Street Fighter", "Play Station"},
        {2, 2, "Mario Broos", "Nintendo"},
        {3, 8, "God of War", "Play Station"},
        {4, 10, "Crash", "Nintendo"},
        {5, 5, "Call of Duty", "Play Station"},
        {6, 9, "Counter Strike", "PC"},
    };

    Consola JuegosPorConsola[m] = {};

    ordenarPorConsola(juegos, 6);

    GenerarJuegosPorConsola(juegos, 6, JuegosPorConsola, m);
    for (int i = 0; i < m; i++)
    {
        cout << JuegosPorConsola[i].consola << ": " << JuegosPorConsola[i].cantJuegos << endl;
    }
}
