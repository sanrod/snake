
#include"FoodRand.h"
#include"Global.h"
//#include<random>
#include <stdlib.h>
#include<time.h>
/*

-�������� ��������� ��� ������ �����
(��� �� ����� ��������� �� ����� ,����������� ������� ���� )
-��������� � ������ ����� , ���� ��������� ���������� ������ ��� ��������, � ���
-������� ����, � ������� ������������ ���������� ��� � ������
-
  */

bool isSnakeBody(int Snake[][2],int x, int y, int Snakesize)
{
    for(int i=0;i<Snakesize;i++)
    {
        if (Snake[i][0]==x&&Snake[i][1]==y) return true ;
    }
return  false;
}

char FoodRand(int Snake[][2],char Field[][HEIGTH],int Snakesize)
{
    srand(time(NULL));
    int x,y;
    do
    {
     x=rand()%HEIGTH-1;
     y=rand()%WIDTH-1;
    }while(x==0||y==0||isSnakeBody(Snake,x,y,Snakesize));

    Field[y][x]=0xF9;


    return 0;
}
