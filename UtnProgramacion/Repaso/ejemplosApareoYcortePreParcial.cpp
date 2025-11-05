#include <iostream>

using namespace std;

struct Presentismo
{
    int legajo;
    int fecha;
    bool presente;
};

struct PresentismoPorMateria
{
    string materia;
    int legajo;
    int fecha;
    bool presente;
};

void Apareo(int vecA[], int n, int vecB[], int m, int vecC[], int &k)
{
    int i = 0, j = 0;

    k = 0;
    while (i < n && j < m)
    {
        if (vecA[i] < vecB[j])
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

void CorteControl(Presentismo vec[], int n)
{
    int i = 0;
    int acumulador = 0;
    int key;

    while (i < n)
    {
        key = vec[i].legajo;
        acumulador = 0;
        while (i < n && key == vec[i].legajo)
        {
            if (!vec[i].presente)
                acumulador++;
            i++;
        }

        cout << "Legajo: " << key << " Ausencias: " << acumulador << endl;
    }
}

void CorteControlAnidado(PresentismoPorMateria vec[], int n)
{
    int key, acumulador = 0, i = 0;
    string keyMateria;
    bool primerEncabezado = true;
    while (i < n)
    {
        key = vec[i].legajo;

        while (i < n && key == vec[i].legajo)
        {
            // contar por materia
            acumulador = 0;
            keyMateria = vec[i].materia;

            while (i < n && key == vec[i].legajo && keyMateria == vec[i].materia)
            {
                if (!vec[i].presente)
                    acumulador++;

                i++;
            }
            if (primerEncabezado)
            {
                cout << "MATERIA\t LEGAJO\t FALTAS" << endl;
                primerEncabezado = false;
            }

            cout << keyMateria << "\t" << key << "\t" << acumulador << endl;
        }
    }
}

int main()
{

    // Presentismo vec[4] =
    //     {
    //         {11709099, 20200504, true},
    //         {11709099, 20200525, true},
    //         {13423223, 20200504, false},
    //         {12936274, 20200518, false},
    //     };

    // CorteControl(vec, 4);

    PresentismoPorMateria vec[7] =
        {
            {"INGLES1", 11709099, 20200529, true},
            {"PROG1", 11709099, 20200521, true},
            {"PROG1", 11709099, 20200528, false},
            {"PROG2", 12323422, 20200517, false},
            {"PROG2", 12323422, 20200517, false},
            {"PROG2", 12323422, 20200517, false},
            {"INGLES1", 12323422, 20200517, true},
        };

    CorteControlAnidado(vec, 7);

    return 0;
}