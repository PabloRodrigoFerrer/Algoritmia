#include <iostream>

using namespace std;

struct Empleado
{
    int legajo;
    int diasLaborales[5];
};

int diasPresentismo(int vec[], int n)
{
    int suma = 0;
    for (int i = 0; i < n; i++)
        suma += vec[i];

    return suma;
}

void ordenarPorPresentismo(Empleado vec[], int n)
{
    // insertion
    Empleado key;
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        key = vec[i];
        j = i - 1;

        while (diasPresentismo(key.diasLaborales, 5) > diasPresentismo(vec[j].diasLaborales, 5))
        {
            vec[j + 1] = vec[j];
            j--;
        }
        vec[j + 1] = key;
    }
}

int posMayor(int vec[], int n)
{
    int menor = vec[0];
    int pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] < menor)
        {
            menor = vec[i];
            pos = i;
        }
    }

    return pos;
}
void top2Legajos(Empleado empleados[])
{
    cout << "TOP 2 LEGAJOS" << endl;
    cout << empleados[0].legajo << " dias trabajados: " << diasPresentismo(empleados[0].diasLaborales, 5) << endl;
    cout << empleados[1].legajo << " dias trabajados: " << diasPresentismo(empleados[1].diasLaborales, 5) << endl;
}

int main()
{

    int n;
    cout << "Cuantos empleados desea cargar? ";
    cin >> n;

    Empleado empleados[n];

    cout << "\nCARGUE LOS DATOS" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Legajo: " << endl;
        cin >> empleados[i].legajo;

        for (int j = 0; j < 5; j++)
        {
            cout << "Presentismo día " << j << ": ";
            cin >> empleados[i].diasLaborales[j];
        }
    }

    ordenarPorPresentismo(empleados, n);

    // B
    top2Legajos(empleados);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "\nLegajo: " << empleados[i].legajo << endl;
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cout << empleados[i].diasLaborales[j] << " ";
    //     }
    // }

    // C

    int acuDias[5] = {};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < n; j++)
        {
            acuDias[i] += empleados[j].diasLaborales[i];
        }
    }

    cout << "El dia con mayor ausentimos es el dia: " << posMayor(acuDias, 5) + 1 << endl;

    return 0;
}
