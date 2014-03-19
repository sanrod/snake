
#include"FoodRand.h"
#include"Global.h"
#include<random>
#include<time.h>
char food(int Snake[][2],char Field[][HEIGTH], int Snakesize)
{
    srand(time(NULL));

    do
    {
    int x=rand()%WIDTH-1;
    int y=rand()%HEIGTH-1;
    }
    while(x==0||y==0||);



    return 0xF9;
}
