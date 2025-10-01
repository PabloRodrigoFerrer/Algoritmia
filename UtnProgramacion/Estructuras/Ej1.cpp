#include <iostream>
#include <limits>

using namespace std;

struct Alumno
{
    string legajo;
    string ApellidoNombre;
    float nota;
};

void cargarRegistro(Alumno &registro)
{
    do
    {
        cout << "Ingrese un numero de legajo(8 digitos): ";
        cin >> registro.legajo;

    } while (registro.legajo.length() != 8);

    do
    {
        cout << "Ingrese apellido y nombre: ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, registro.ApellidoNombre);

    } while (registro.ApellidoNombre.length() > 25 || registro.ApellidoNombre.length() < 3);

    do
    {
        cout << "Ingrese la nota (0 - 10): ";
        cin >> registro.nota;

    } while (registro.nota < 0 || registro.nota > 10);
}

void mostrarRegistro(Alumno registro)
{
    cout << registro.legajo << endl;
    cout << registro.ApellidoNombre << endl;
    cout << registro.nota << endl;
}

Alumno cargarAlumno(string nombre, int nota)
{
    Alumno alum;
    alum.ApellidoNombre = nombre;
    alum.nota = nota;

    return alum;
}

int main(int argc, char const *argv[])
{

    Alumno AlumnoUno;

    cargarRegistro(AlumnoUno);
    mostrarRegistro(AlumnoUno);

    return 0;
}
