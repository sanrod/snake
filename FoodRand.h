#ifndef FOODRAND_H
#define FOODRAND_H
#include"Global.h"
char FoodRand(int Snake[][2],char Field[][HEIGTH], int Snakesize);
bool isSnakeBody(int Snake[][2],int x, int y, int Snakesize);
#endif // FOODRAND_H

