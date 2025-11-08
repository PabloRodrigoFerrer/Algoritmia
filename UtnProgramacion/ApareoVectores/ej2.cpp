#include <iostream>

using namespace std;

struct LibroLocal
{
    int Codigo;
    string Autor;
    int StockLocal;
    string Titulo;
    string Editorial;
    string Genero;
};

void Apareo(LibroLocal vecA[], int n, LibroLocal vecB[], int m, LibroLocal vecC[], int &k)
{
    int i = 0, j = 0;
    k = 0;

    while (i < n && j < m)
    {

        if (vecA[i].Codigo < vecB[j].Codigo)
        {
            if (vecA[i].StockLocal <= 0)
            {
                vecC[k] = vecA[i];
                k++;
            }
            i++;
        }
        else
        {
            if (vecB[j].StockLocal <= 0)
            {
                vecC[k] = vecB[j];
                k++;
            }
            j++;
        }
    }

    while (i < n)
    {
        if (vecA[i].StockLocal <= 0)
        {
            vecC[k] = vecA[i];
            k++;
        }
        i++;
    }

    while (j < m)
    {
        if (vecB[j].StockLocal <= 0)
        {
            vecC[k] = vecB[j];
            k++;
        }
        j++;
    }
}

int main()
{

    int k = 100;
    LibroLocal StockEnLocal[5] = {
        {1001, "Marta Sanchez", 12, "Saliendo a cantar", "lalala", "Novela"},
        {1002, "Rolando Cruz", 0, "El guitarrero", "lalala", "Misterio"},
        {1003, "Alejandro Watch", 3, "Aventura en el desierto", "lalala", "Policial"},
        {1004, "Martina Greinsten", 0, "Luz camara acción", "nonono", "Fantasia"},
        {1005, "Juan Man", 0, "El señor", "lalala", "Ciencia ficcion"},
    };

    LibroLocal StockEnDeposito[3] = {
        {1001, "", 0, "", "", ""},
        {1002, "", 0, "", "", ""},
        {1005, "", 0, "", "", ""},
    };

    LibroLocal StockLibros[k];

    Apareo(StockEnLocal, 5, StockEnDeposito, 3, StockLibros, k);

    cout << "Libros faltantes" << endl;
    cout << "Codigo\t Observacion" << endl;
    for (int i = 0; i < k; i++)
    {
        cout << StockLibros[i].Codigo << "\t";
        if (StockLibros[i].Codigo == StockLibros[i + 1].Codigo)
        {
            cout << "Falta en local y deposito" << endl;
            i++;
        }
        else if (StockLibros[i].Titulo != "")
            cout << "Falta en local" << endl;

        else
            cout << "Falta en el deposito" << endl;
    }

    cout << "Total de libros en falta: " << k << endl;

    return 0;
}