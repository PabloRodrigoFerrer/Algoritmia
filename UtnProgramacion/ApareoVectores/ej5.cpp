#include <iostream>

using namespace std;

struct Venta
{
    string id;
    int cantidad;
};

struct infoDiscos
{
    string id;
    string NombreDisco;
    int idBanda;
    string NombreBanda;
};

int BuscarPorId(infoDiscos discos[], int n, string valorID)
{
    int inicio, final, mitad;
    inicio = 0;
    final = n - 1;

    while (final >= inicio)
    {
        mitad = inicio + (final - inicio) / 2;

        if (discos[mitad].id == valorID)
            return mitad;

        if (discos[mitad].id > valorID)
        {
            final = mitad - 1;
        }
        else
        {
            inicio = mitad + 1;
        }
    }

    return -1;
}

void OrdenarPorId(Venta vec[], int n)
{
    Venta aux;
    int i = 0;
    bool ordenado = false;
    while (i < n && !ordenado)
    {
        ordenado = true;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (vec[j].id > vec[j + 1].id)
            {
                aux = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = aux;
                ordenado = false;
            }
        }
        i++;
    }
}

void ConsolidarVentas(Venta ventas[], int n, Venta vecConsolidar[], int &m)
{
    int i = 0, ventasPorDisco = 0;
    string keyId;
    m = 0;

    while (i < n)
    {
        keyId = ventas[i].id;
        ventasPorDisco = 0;
        while (i < n && keyId == ventas[i].id)
        {
            ventasPorDisco += ventas[i].cantidad;
            i++;
        }

        vecConsolidar[m].id = keyId;
        vecConsolidar[m].cantidad = ventasPorDisco;
        m++;
    }
}

void GenerarReporte(Venta vecConsolidado[], int n, infoDiscos maestroDiscos[], int k)
{
    int pos;
    for (int i = 0; i < n; i++)
    {
        pos = BuscarPorId(maestroDiscos, k, vecConsolidado[i].id);
        cout << "Banda:" << maestroDiscos[pos].NombreBanda << " Cantidad: " << vecConsolidado[i].cantidad << endl;
    }
}

int main()
{

    infoDiscos maestroDiscos[] = {
        {"ABBA03", "Greatest Hits", 10, "ABBA"},
        {"ACDC01", "Back in Black", 20, "AC/DC"},
        {"LOAD09", "Load", 30, "Metallica"},
        {"LSCA01", "Thriller", 40, "Michael Jackson"},
        {"MADD07", "Madonna", 50, "Madonna"},
        {"PSK06", "EleganteKloke", 20, "Elegante"}};

    Venta ventas[4][3] = {
        {{"ACDC01", 2000}, {"ABBA03", 20}, {"LSCA01", 2000}},
        {{"LOAD09", 1500}, {"MADD07", 3500}, {"ACDC01", 1000}},
        {{"MADD07", 500}, {"PSK06", 200}, {"PSK06", 1000}},
        {{"ABBA03", 100}, {"ACDC01", 100}, {"ABBA03", 1000}},
    };

    Venta ventasFlatten[12];
    int k = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ventasFlatten[k] = ventas[i][j];
            k++;
        }
    }

    int m = 100;
    Venta vecConsolidado[m];

    // ordeno y agrupo el vector
    OrdenarPorId(ventasFlatten, 12);

    // genero vectorConsolidado
    ConsolidarVentas(ventasFlatten, k, vecConsolidado, m);

    GenerarReporte(vecConsolidado, m, maestroDiscos, 6);

    return 0;
}