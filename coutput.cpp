#include "coutput.h"

void coutput(char array[][HEIGTH])
{
    system("cls");
    for (int i=0;i<HEIGTH;i++)
    {
        for (int j=0;j<WIDTH;j++)
            printf("%c",array[j][i]);
      printf("\n");
    }

}


