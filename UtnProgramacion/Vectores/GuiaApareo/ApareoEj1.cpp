
#include <iostream>

using namespace std;

struct Legajo
{
    int numeroLegajo;
    int codigoMateria;
    string ApellidoNombre;
};

void Apareo(Legajo vecA[], int n, Legajo vecB[], int m, Legajo vecC[], int &k)
{
    int i = 0, j = 0;
    k = 0;

    while (i < n && j < m)
    {
        if (vecA[i].codigoMateria < vecB[j].codigoMateria)
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

int main(int argc, char const *argv[])
{
    int k = 0;
    int n = 3, m = 4;

    Legajo MAESTROFINALES[n] = {
        {1, 100101, "Perez Juan"},
        {3, 100102, "Gomez Ana"},
        {4, 100103, "Lopez Carlos"}};

    Legajo DIAFINALES[m] = {
        {2, 100101, "Perez Juan"},
        {5, 100102, "Gomez Ana"},
        {6, 100103, "Lopez Carlos"},
        {8, 100103, "Reche Gregorio"}};

    Legajo FINALESACT[n + m];

    Apareo(MAESTROFINALES, n, DIAFINALES, m, FINALESACT, k);

    cout << "Las inscripciones al final ordenadas por codigo materia son:";
    for (int i = 0; i < k; i++)
    {
        cout << "Legajo: " << FINALESACT[i].numeroLegajo;
        cout << " Codigo Materia: " << FINALESACT[i].codigoMateria;
        cout << " Apellido y Nombre: " << FINALESACT[i].ApellidoNombre << endl;
    }

    return 0;
}
