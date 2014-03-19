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
#include"FoodRand.h"
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
#include"FoodRand.h"
int x_eda,y_eda;
int main()
{
    int SnakeMas[100][2];
    char Field[WIDTH][HEIGTH]; // pole
    for(int i=0;i<WIDTH;i++)
    {
        for(int j=0;j<HEIGTH;j++)
        {
            if ((i==0) && (j==0))
            {
                Field[i][j]=getLeftTopCorner();
                continue;
            }
            if ((i==0) && (j==HEIGTH-1))
            {
                Field[i][j]=getLeftBottomCorner();
                continue;
            }
            if ((i==WIDTH-1) && (j==0))
            {
                Field[i][j]=getRightTopCorner();
                continue;
            }
            if ((i==WIDTH-1) && (j==HEIGTH-1))
            {
                Field[i][j]=getRightBottomCorner();
                continue;
            }
            if ((i==0) || (i==WIDTH-1))
            {
                Field[i][j]=getVerticalBorder();
                continue;
            }
            if ((j==0) || (j==HEIGTH-1))
            {
                Field[i][j]=getHorizontalBorder();
                continue;
            }
            Field[i][j]=' ';
        }
    }
    SnakeMas[2][0]=1; SnakeMas[2][1]=1;
    SnakeMas[1][0]=2; SnakeMas[1][1]=1;
    SnakeMas[0][0]=3; SnakeMas[0][1]=1;


    copySnake(SnakeMas,Field,3);
    coutput(Field);
    for(;;)
    {
	//	printf("%d",FoodRand());
        deleteSnake(SnakeMas,Field,3);
		makeAStep (SnakeMas,3,3); /*scanMove()*/
		if((x_eda==SnakeMas[0][0]) && (y_eda==SnakeMas[0][1]))
		{
	//		DeleteFood(x_eda,y_eda);
	//		SnakeRise(SnakeMas);
		}
        copySnake (SnakeMas,Field,3);
        coutput (Field);
        Sleep(50);
    }
    return 0;
}
