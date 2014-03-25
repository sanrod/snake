#include "scanMove.h"

int scanMove(int m)
{
    int n=m;
    for(int i=1;i<=10;i++)
    {
        if(kbhit()==1)
            switch(getch())
            {
                case 72:{ n=4; break;}
                case 75:{ n=3; break;}
                case 80:{ n=2; break;}
                case 77:{ n=1; break;}
            }
        Sleep(1);
    }
    if(m==n) return m;
    if(abs(m-n)!=2)
        return n;
    else
        return m;
}
