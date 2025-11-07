#include <iostream>

using namespace std;

struct Alumno
{
    int NumeroLegajo;
    int CodMateria;
    string ApellidoNombre;
};

void ApareoVectores(Alumno vecA[], int n, Alumno vecB[], int m, Alumno vecC[], int &k)
{
    int i = 0, j = 0;
    k = 0;

    while (i < n && j < m)
    {
        if (vecA[i].CodMateria < vecB[j].codi)
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

main()
{
    int k = 100;
    Alumno MAESTROFINALES[4] = {
        {50505050, 100001, "Juan"},
        {30303030, 100003, "Pablo"},
        {40404040, 100006, "Segundo"},
        {20202020, 100008, "Tercero"},
    };

    Alumno DIAFINALES[3] = {
        {10101010, 100002, "Rodrigo"},
        {60606060, 100004, "Virginia"},
        {90909090, 100007, "Yamila"},
    };

    Alumno FINALESACT[k];

    ApareoVectores(MAESTROFINALES, 4, DIAFINALES, 3, FINALESACT, k);

    for (int i = 0; i < k; i++)
    {
        cout << FINALESACT[i].CodMateria << endl;
        cout << FINALESACT[i].NumeroLegajo << endl;
        cout << FINALESACT[i].ApellidoNombre << endl;
        cout << "------------------------------" << endl;
    }

    return 0;
}
