#include "copySnake.h"


void copySnake(int Snake[][2],char Field[][HEIGTH], int Snakesize)
{
    for(int i=0;i<Snakesize;i++)
    {
        if(i==0) Field[Snake[i][0]][Snake[i][1]]=getSnakeHead();
           else  Field[Snake[i][0]][Snake[i][1]]=getSnakeBody();
//����� ������
    }
}
