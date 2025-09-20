#include <iostream>
using namespace std;

int main()
{
    int N;

    cout << "Ingrese un valor N para el tamaño del vector: " << endl;
    cin >> N;

    int myVector[N];
    for (int i = 0; i < N; i++)
    {
        i == 0 ? myVector[i] = i : myVector[i] = 2 * i;
    }

    for (int i = 0; i < N / 2; i++)
    {
        cout << myVector[i] << endl;
    }

    return 0;
}