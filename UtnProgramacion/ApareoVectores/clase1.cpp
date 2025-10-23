#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char codigo[6];
    char dos[6];

    cout << "Ingrese un codigo de 5 caracteres: ";
    cin >> codigo;
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        dos[i] = codigo[i];
    }

    cout << codigo << endl;

    cout << dos << endl;

    return 0;
}