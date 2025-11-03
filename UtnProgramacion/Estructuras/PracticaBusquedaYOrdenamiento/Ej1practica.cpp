#include <iostream>

using namespace std;

struct Fecha
{
    int dia;
    int mes;
    int anio;
};

struct Boleta
{
    string apellido;
    int numeroLegajo;
    string codigoMateria;
    Fecha fecha;
};

void CargarBoletas(Boleta boletas[])
{
    int i = 0;
    cout << "Ingrese un numero de legajo: ";
    cin >> boletas[i].numeroLegajo;
    cout << endl;

    while (boletas[i].numeroLegajo != 0 && i < 100)
    {
        cout << "Ingrese codigo de materia: ";
        cin >> boletas[i].codigoMateria;
        cout << "Dia de examen: ";
        cin >> boletas[i].fecha.dia;
        cout << "Mes de examen: ";
        cin >> boletas[i].fecha.mes;
        cout << "Anio de examen: ";
        cin >> boletas[i].fecha.anio;
        cout << "Apellido: ";
        cin >> boletas[i].apellido;
        cout << "--------------" << endl;

        i++;
        cout << "\nIngrese un numero de legajo (0 para salir) :";
        cin >> boletas[i].numeroLegajo;
    }
}

void OrdernarBoletas(Boleta boletas[], int n, Boleta vecOrdenado[])
{
    for (int i = 0; i < n; i++)
    {
        vecOrdenado[boletas[i].numeroLegajo - 80001].numeroLegajo = boletas[i].numeroLegajo;
        vecOrdenado[boletas[i].numeroLegajo - 80001].apellido = boletas[i].apellido;
    }
}

int main()
{
    Boleta vecOrdenado[100];
    Boleta boletas[100];
    CargarBoletas(boletas);
    OrdernarBoletas(boletas, 100, vecOrdenado);

    cout << vecOrdenado[14].numeroLegajo;

    return 0;
}
