#ifndef NAVE_H
#define NAVE_H
#include <conio.h>
#include <windows.h>
#include <stdio.h>

#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80


class Nave
{
    private:
        int x;
        int y;


    public:
        Nave(int _x , int _y);

        int Getx() { return x; }
        void Setx(int val) { x = val; }
        int Gety() { return y; }
        void Sety(int val) { y = val; }


        void gotoxy(int x, int y){

        HANDLE hCon;
        hCon = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD dwPos; // funcion para establaecer posición xy en consola
        dwPos.X = x;
        dwPos.Y = y;

        SetConsoleCursorPosition(hCon, dwPos); // posisionamos el cursor
        }

        void pintar(){
            gotoxy(x, y);     printf("   /^\\   ");
            gotoxy(x, y + 1); printf("  /===\\  ");
            gotoxy(x, y + 2); printf(" | o o | ");
            gotoxy(x, y + 3); printf(" \\ --- / ");
            gotoxy(x, y + 4); printf("  \\___/  ");
        }
        void borrar(){
            gotoxy(x, y);    printf("         ");
            gotoxy(x, y +1); printf("         ");
            gotoxy(x, y + 2);printf("         ");
            gotoxy(x,y + 3); printf("         ");
            gotoxy(x,y + 4); printf("         ");
        }
        void mover(){
            if(kbhit()){
                char tecla = getch(); // guardamos la tecla pulsada
                borrar();

                switch(tecla){
                    case IZQUIERDA: x--; break;
                    case DERECHA: x++; break;
                    case ABAJO: y++; break;
                    case ARRIBA: y--; break;
                }
                pintar(); // imprimimos la nueva coordenada
            }
        }




};

#endif // NAVE_H
