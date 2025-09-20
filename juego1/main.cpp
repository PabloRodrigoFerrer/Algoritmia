#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <../Nave.h>


#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80


using namespace std;

void ocultarCursor(){

    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE); //Guardar identificador de objeto de windows
    CONSOLE_CURSOR_INFO cci; //cursor info es un objeto.
    cci.dwSize = 1; //tamaño
    cci.bVisible = false; //visibilidad cursor

    SetConsoleCursorInfo(hCon, &cci);
}


int main(){

    ocultarCursor();
    int x = 5, y = 5;
    Nave MiNave(x,y);

    MiNave.pintar();



    bool game_over = false;
    while(!game_over){

        MiNave.mover();


        Sleep(30); // reducimos el parpadeo
    }

    return 0;
}
