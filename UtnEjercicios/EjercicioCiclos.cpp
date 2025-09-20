#include <iostream>

using namespace std;



void modificar(int &r, int p){
    r = r + 2;
    p = p + 3;
}

int factorial(int n){
    if (n == 0) return 1;

    return n * factorial(n -1);
}

int main (){

    int a = 5, b = 10;

    modificar(a, b);
    cout << a << " " << b << endl;

    modificar(b, a);
    cout << a << " " << b << endl;


    return 0;
}
