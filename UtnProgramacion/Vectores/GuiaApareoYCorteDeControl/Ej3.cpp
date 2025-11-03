#include <iostream>

using namespace std;

struct Episodio
{
    int IdSerie;
    string Titulo;
    int Episodio;
    int NumTemporada;
    long Descargas;
    int ultimaDescarga; // formato AAAA/MM/DD
};

int main()
{
    // Cantidad total de Episodios de temporada
    // Total de descargas de la temporada

    // total general de series

    Episodio episodios[6];

    episodios[0] = {1, "Breaking bad", 4, 1, 322233, 20251029};
    episodios[1] = {1, "Breaking bad", 5, 1, 222245, 20251029};
    episodios[2] = {1, "Breaking bad", 6, 1, 223222, 20251029};
    episodios[3] = {2, "Cyber Punk", 23, 2, 223331, 20250430};
    episodios[4] = {2, "Cyber Punk", 24, 2, 333331, 20250430};
    episodios[5] = {3, "Better call saul", 4, 1, 322233, 20240630};

    int contadorCapitulosPorSerie = 0;
    long totalDescargasPorSerie = 0;
    int totalGeneralDeSeries;
    int i = 0;
    int key = 0;

    cout << "Listado de Descargas de Series" << endl;
    cout << endl;

    while (i < 6)
    {
        key = episodios[i].IdSerie;
        contadorCapitulosPorSerie = 0;
        totalDescargasPorSerie = 0;
        totalGeneralDeSeries += 1;

        cout << "Id serie: " << episodios[i].IdSerie << endl;
        cout << "Titulo: " << episodios[i].Titulo << endl;
        cout << "Episodio: " << episodios[i].Episodio << endl;
        cout << "-------------------------------" << endl;

        while (i < 6 && episodios[i].IdSerie == key)
        {
            contadorCapitulosPorSerie += 1;
            totalDescargasPorSerie += episodios[i].Descargas;
            i++;
        }

        cout << "Cant. Total de Episodios de la temporada: " << contadorCapitulosPorSerie << endl;
        cout << "Cant. Total de Descargas de la temporada: " << totalDescargasPorSerie << endl;
        cout << endl;
    }

    cout << endl;
    cout << "Cant. General de series: " << totalGeneralDeSeries << endl;

    return 0;
}
