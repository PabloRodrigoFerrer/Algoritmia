#include <iostream>

using namespace std;
struct Legajo
{
    int numero;
    int anio_inscripcion;
};

struct Alumno
{
    Legajo legajo;
    string nombre;
    string apellido;
};

void mostrarAlumn(Alumno alum)
{
    cout << alum.nombre << endl;
    cout << alum.apellido << endl;
    cout << alum.legajo.numero << endl;
}

Alumno busquedaPorApellido(Alumno arr[], int n, string apellido)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i].apellido == apellido)
            return arr[i];
    }
    Alumno alum{};
    return alum;
}

int busquedaPorLegajo(Alumno arr[], int n, int numeroLegajo)
{
    int inicio = 0;
    int fin = n - 1;

    while (fin >= inicio)
    {
        int mitad = inicio + (fin - inicio) / 2;
        // Si el elemento es el del medio, devolvemos la posicion
        if (arr[mitad].legajo.numero == numeroLegajo)
            return mitad;
        // Si el elemento es menor entonces solo puede estar en la primer mitad
        if (arr[mitad].legajo.numero > numeroLegajo)
        {
            fin = mitad - 1; // Cambio el limite superior
        }
        else
        {
            inicio = mitad + 1; // Cambio el limite inferior
        }
    }
    // Si llegamos hasta aca es que el elemento no estaba
    return -1;
}

main(int argc, char const *argv[])
{
    Alumno alum;
    alum.apellido = "Ferrer";
    alum.nombre = "Rodrigo";
    alum.legajo.numero = 2;

    Alumno vec[2];

    cout << busquedaPorLegajo(vec, 2, 2) << endl;

    Legajo legajos[5] = {
        {1001, 2020},
        {1002, 2021},
        {1003, 2022},
        {1004, 2023},
        {1005, 2024}};

    string nombres[5] = {
        "Lucas",
        "Martina",
        "Santiago",
        "Valentina",
        "Mateo"};

    string apellidos[5] = {
        "Gomez",
        "Lopez",
        "Fernandez",
        "Diaz",
        "Ruiz"};

    Alumno misAlumnos[5];

    // carga vector mis Alumnos
    for (int i = 0; i < 5; i++)
    {
        misAlumnos[i].nombre = nombres[i];
        misAlumnos[i].apellido = apellidos[i];
        misAlumnos[i].legajo = legajos[i];
    }

    // muestro vector mis Alumnos
    for (int i = 0; i < 5; i++)
    {
        cout << misAlumnos[i].nombre << endl;
        cout << misAlumnos[i].apellido << endl;
        cout << misAlumnos[i].legajo.numero << endl;
        cout << "---------------------------" << endl;
    }

    string apellidoUser;

    cout << "Ingrese un apellido: ";
    cin >> apellidoUser;

    Alumno alumEncontrado = busquedaPorApellido(misAlumnos, 5, apellidoUser);

    mostrarAlumn(alumEncontrado);
}
