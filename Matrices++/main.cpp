 /* hacer una matriz de tipo 2*2, llenarla de números y luego copiar su contenido
 a otra matriz */

 #include<iostream>

 using namespace std;

 int main(){

    int matriz[2][2];
    int matrizCopia[2][2];
    int numero;

    //llenamos la matriz
    for(int x=0;x<2;x++){
        for(int y=0;y<2;y++){
            cout<<"Ingrese un numero para la fila "<<x+1<<": ";cin>>numero;
            matriz[x][y]=numero;
        }
    }

    //copiamos la matriz
    for(int x=0;x<2;x++){
        for(int y=0;y<2;y++){
            matrizCopia[x][y]=matriz[x][y];
        }
    }

    //mostramos la matriz
    for(int x=0;x<2;x++){
       for(int y=0;y<2;y++){
           cout<<matrizCopia[x][y]<<" ";
        }
        cout<<"\n";
    }

    return 0;
 }
