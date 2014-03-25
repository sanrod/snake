/*
 Настя:
 - Поле, в котором будет бегать змейка
 - Как будет выглядеть сама змейка.
 - Как будет выглядеть пища.


 - Поле - матрица символьного типа, произвольного размера.
 - Функция, которая рисует рамку.
 - Двумерный массив с координатами змейки.
 - функция makeAStep(a,b,c). Будет двигать змейку.
 - функция вывода поля на экран.     coutput(field);
 - функция копирования змейки на поле copySnake
 - функция стирания змейки с поля.  deleteSnake
 */

#include "coutput.h"
#include "Global.h"
#include <time.h> //Sleep(ms)
#include <conio.h> // hitkey() getch()
#include <windows.h> // system(cls)
#include <stdio.h>
#include "deleteSnake.h"
#include "copySnake.h"
#include "DriveEngenie.h"
#include "getSnake.h"
#include "scanMove.h"
#include "droFild.h"

using namespace std;

int main()
{
    int SnakeMas[100][2];
    char Field[WIDTH][HEIGTH]; // pole
	drofild(Field);

    SnakeMas[2][0]=1; SnakeMas[2][1]=1;
    SnakeMas[1][0]=2; SnakeMas[1][1]=1;
    SnakeMas[0][0]=3; SnakeMas[0][1]=1;


    copySnake(SnakeMas,Field,3);
    coutput(Field);
	int Number_direction = 0;
    for(int i=0;i<100000;i++)
    {
        deleteSnake(SnakeMas,Field,3);
        makeAStep (SnakeMas,3,0);
        copySnake (SnakeMas,Field,3);
        coutput (Field);
		Number_direction=scanmove();
        Sleep(500);

    }
    return 0;
}
