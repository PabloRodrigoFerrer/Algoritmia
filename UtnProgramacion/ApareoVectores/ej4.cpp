#include <iostream>

using namespace std;

struct Juego
{
    int Codigo;
    int Stock;
    string Titulo;
    string Consola;
};

struct Consola
{
    string Consola;
    int CantJuegos;
};

void OrdenarPorConsola(Juego juegos[], int n)
{
    Juego aux;
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {
            if (juegos[j].Consola > juegos[j + 1].Consola)
            {
                aux = juegos[j];
                juegos[j] = juegos[j + 1];
                juegos[j + 1] = aux;
            }
        }
    }
}

void GenerarJuegosPorConsola(Juego juegos[], int n, Consola juegosPorConsola[], int &m)
{
    m = 0;
    int i = 0, contJuegosPorConsola;
    string keyConsola;

    OrdenarPorConsola(juegos, n);

    while (i < n)
    {
        keyConsola = juegos[i].Consola;
        contJuegosPorConsola = 0;

        while (i < n && keyConsola == juegos[i].Consola)
        {
            contJuegosPorConsola++;
            i++;
        }

        juegosPorConsola[m].Consola = keyConsola;
        juegosPorConsola[m].CantJuegos = contJuegosPorConsola;
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

    GenerarJuegosPorConsola(juegos, 6, JuegosPorConsola, m);

    for (int i = 0; i < m; i++)
    {
        cout << "Consola: " << JuegosPorConsola[i].Consola << " Cant. Juegos: " << JuegosPorConsola[i].CantJuegos << endl;
    }

    return 0;
}