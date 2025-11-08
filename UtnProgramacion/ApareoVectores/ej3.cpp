#include <iostream>

using namespace std;

struct Episodios
{
    int Id_Serie;
    string Titulo;
    int Temporada;
    long Descargas;
    int Episodio;
    int UltimaDescarga; // aaaammdd
};

void ListadoSeries(Episodios series[], int n)
{
    int keySerie, keyTemporada;
    int i = 0, totalSeries = 0, totalEpiPorTemporada = 0;
    long totalDescPorTemporada = 0, totalDescPorSerie = 0, TotalEpiPorSerie = 0;
    bool mostrarEncabezado;

    cout << "Listado de Descargas de Series" << endl;
    while (i < n)
    {
        keySerie = series[i].Id_Serie;
        TotalEpiPorSerie = 0;
        totalDescPorSerie = 0;

        while (i < n && keySerie == series[i].Id_Serie)
        {
            keyTemporada = series[i].Temporada;
            totalEpiPorTemporada = 0;
            totalDescPorTemporada = 0;

            cout << "\nSerie: " << keySerie << endl;
            cout << "Temporada: " << keyTemporada << endl;
            mostrarEncabezado = true;

            while (i < n && keySerie == series[i].Id_Serie && keyTemporada == series[i].Temporada)
            {
                totalEpiPorTemporada++;
                totalDescPorTemporada += series[i].Descargas;
                TotalEpiPorSerie++;

                if (mostrarEncabezado)
                {
                    cout << "N. de Episodio\t Titulo del Episodio\t Cant.Descargas\t Fecha ultima desc" << endl;
                    mostrarEncabezado = false;
                }

                cout << series[i].Episodio << "\t\t";
                cout << series[i].Titulo << "\t\t";
                cout << series[i].Descargas << "\t\t";
                cout << series[i].UltimaDescarga << "\n";

                i++;
            }

            totalDescPorSerie += totalDescPorTemporada;

            cout << "-----------------------------------------" << endl;
            cout << "Cant. Total de Episodios de la temporada: " << totalEpiPorTemporada << endl;
            cout << "Total descargas de la temporada: " << totalDescPorTemporada << endl;
        }

        cout << "\n**Cant. Total de Episodios de la Serie: " << TotalEpiPorSerie << endl;
        cout << "**Total descargas de la Series: " << totalDescPorSerie << endl;

        totalSeries++;
    }

    cout << "\n**Total general de Sries: " << totalSeries << endl;
}

int main()
{

    Episodios series[10] = {
        {1, "Breaking bad", 2, 233, 1, 20240311},
        {1, "Breaking bad", 2, 400, 2, 20240311},
        {1, "Breaking bad", 2, 200, 3, 20240311},
        {1, "Breaking bad", 3, 100, 1, 20240311},
        {1, "Breaking bad", 3, 300, 2, 20240311},
        {2, "Sherlock Holmes", 1, 253, 1, 20240311},
        {2, "Sherlock Holmes", 1, 500, 2, 20240311},
        {3, "Los Soprano", 1, 655, 150, 20240311},
        {3, "Los Soprano", 2, 233, 151, 20240311},
        {3, "Los Soprano", 2, 442, 152, 20240311},
    };

    ListadoSeries(series, 10);

    return 0;
}