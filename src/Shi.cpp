#include "Shi.h"
#include<stdlib.h>

bool Shi::check(string color,int x,int y,int x1,int y1)
{
    int dx=x1-x;
    int dy=y1-y;
    if(color=="white")
    {
        if(x1>=0&&x1<=2&&y1<=5&&y1>=3)
        {
            if(abs(dx)==1&&abs(dy)==1)
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
            if(abs(dx)==1&&abs(dy)==1)
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
Shi::Shi()
{
    //ctor
}

Shi::~Shi()
{
    //dtor
}
