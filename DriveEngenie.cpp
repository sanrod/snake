#include "DriveEngenie.h"

void makeAStep(int Snake[][2],int SnakeSize,int direction)
{
    /*switch(direction){
    case 1: {
                     }*/
   // for(int j=0;j<3;j++){


    for(int i=SnakeSize-1;i>0;i--)
    {
        Snake[i][1]=Snake[i-1][1];
        Snake[i][0]=Snake[i-1][0];
    }

    Snake[0][0]+=1;
    if(Snake[0][0]>WIDTH-2) Snake[0][0]=1;

}
