#include <iostream>

using namespace std;

// stock en local
struct Libro
{
    int codigoLibro;
    int stock;
    string autor;
    string titulo;
    string editorial;
    string genero;
};

void Apareo(Libro vecA[], int n, Libro vecB[], int m, Libro vecC[], int &k)
{
    int i = 0, j = 0;
    k = 0;

    while (i < n && j < m)
    {
        if (vecA[i].codigoLibro < vecB[j].codigoLibro)
        {
            if (vecA[i].stock == 0)
            {
                vecC[k] = vecA[i];
                k++;
            }
            i++;
        }
        else
        {
            if (vecB[j].stock == 0)
            {
                vecC[k] = vecB[j];
                k++;
            }
            j++;
        }
    }

    while (i < n)
    {
        if (vecA[i].stock == 0)
        {
            vecC[k] = vecA[i];
            k++;
        }

        i++;
    }

    while (j < m)
    {
        if (vecB[j].stock == 0)
        {
            vecC[k] = vecB[j];
            k++;
        }
        j++;
    }
}

int main(int argc, char const *argv[])
{
    int cantidadLocal = 3;
    int cantidadDeposito = 2;
    int cantidadFaltante = cantidadLocal + cantidadDeposito;

    Libro StockEnLocal[cantidadLocal], StockEnDeposito[cantidadDeposito], LibrosFaltantes[cantidadFaltante];

    StockEnLocal[0] = {10001, 0, "", "Martin Fierro", "", ""};
    StockEnDeposito[0] = {10001, 0, "", "", "", ""};
    StockEnDeposito[1] = {10002, 0, "", "", "", ""};
    StockEnLocal[1] = {10003, 0, "", "El principito", "", ""};
    StockEnLocal[2] = {10004, 0, "", "Punisher", "", ""};

    Apareo(StockEnLocal, cantidadLocal, StockEnDeposito, cantidadDeposito, LibrosFaltantes, cantidadFaltante);

    for (int i = 0; i < cantidadFaltante; i++)
    {
        cout << "Codigo: " << LibrosFaltantes[i].codigoLibro;
        cout << " Observación: ";

        if ((LibrosFaltantes[i].titulo == "" && LibrosFaltantes[i + 1].titulo != "") && (LibrosFaltantes[i].codigoLibro == LibrosFaltantes[i + 1].codigoLibro))
        {
            cout << " Faltante en local y Deposito ";
            i++;
        }
        else if (LibrosFaltantes[i].titulo == "")
        {
            cout << " Faltante en Deposito ";
        }
        else
        {
            cout << " Faltante en local ";
        }
        cout << endl;
    }

    return 0;
}
