#include "deleteSnake.h"
void deleteSnake(int Snake[][2],char Field[][HEIGTH], int Snakesize)
{
    for(int i=0;i<Snakesize;i++)
    {
        Field[Snake[i][0]][Snake[i][1]]=' ';
        Field[Snake[i][0]][Snake[i][1]]=' ';

   }
}


