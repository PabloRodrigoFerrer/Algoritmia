
#include <iostream>
using namespace std;

struct Alumno
{
    string apellido;
    string legajo;
};

struct Examen
{
    string codigoMateria;
    string fecha;
};

struct boleta
{
    Alumno alumno;
    Examen examen;
};

int ordenarBoletas(boleta vec[], int n)
{
    bool ordenado = false;
    int i = 0;
    while (i < n - 1 && !ordenado)
    {
        ordenado = true;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (vec[j].alumno.legajo > vec[j + 1].alumno.legajo)
            {
                boleta aux = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = aux;
                ordenado = false;
            }
        }
        i++;
    }
}

int main(int argc, char const *argv[])
{
    boleta boletas[100];

    for (int i = 0; i < 100; i++)
    {
        cout << "Ingrese su apellido (0 para salir):";
        cin >> boletas[i].alumno.apellido;
        if (boletas[i].alumno.apellido == "0")
            break;

        cout << "Ingrese legajo (0 para salir):";
        cin >> boletas[i].alumno.legajo;
        if (boletas[i].alumno.legajo == "0")
            break;

        cout << "Ingrese código de materia (0 para salir):";
        cin >> boletas[i].examen.codigoMateria;
        if (boletas[i].examen.codigoMateria == "0")
            break;

        cout << "fecha (dd mm aaaa):";
        cin >> boletas[i].examen.fecha;
        if (boletas[i].examen.fecha == "0")
            break;
    }

    ordenarBoletas(boletas, 100);

    cout << "Boletas ingresadas:" << endl;
    for (int i = 0; i < 100; i++)
    {

        if (!boletas[i].alumno.apellido.empty())
        {
            cout << "Apellido: " << boletas[i].alumno.apellido << endl;
            cout << "Legajo: " << boletas[i].alumno.legajo << endl;
            cout << "Código de materia: " << boletas[i].examen.codigoMateria << endl;
            cout << "Fecha: " << boletas[i].examen.fecha << endl;
            cout << i << endl;
            cout << "------------------------" << endl;
        }
    }

    return 0;
}
