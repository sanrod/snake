
#include"FoodRand.h"
#include"Global.h"
//#include<random>
#include <stdlib.h>
#include<time.h>
/*
  функция -случайое поя
  */
char FoodRand(int Snake[][2],char Field[][HEIGTH], int Snakesize)
{
    srand(time(NULL));
    int x,y;
    do
    {
    int x=rand()%WIDTH-1;
    int y=rand()%HEIGTH-1;
    }
    while(x==0||y==0||);



    return 0xF9;
}
