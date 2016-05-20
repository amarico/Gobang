#include "Jiang.h"
#include<stdlib.h>
bool Jiang::check(string color,int x,int y,int x1,int y1)
{

    int dx=x1-x;
    int dy=y1-y;
    if(color=="white")
    {
        if(x1>=0&&x1<=2&&y1<=5&&y1>=3)
        {
            if((abs(dx)==1&&abs(dy)==0)||(abs(dy)==1&&abs(dx)==0))
            {
                return true;
            }
            else
            {
                return false;
            }

        }
        else
        {
            return false;
        }

    }
    else
    {

        if(x1>=7&&x1<=9&&y1<=5&&y1>=3)
        {
            if((abs(dx)==1&&abs(dy)==0)||(abs(dy)==1&&abs(dx)==0))
            {
                return true;
            }
            else
            {
                return false;
            }

        }
        else
        {
            return false;
        }


    }


}
Jiang::Jiang()
{
    //ctor
}

Jiang::~Jiang()
{
    //dtor
}
