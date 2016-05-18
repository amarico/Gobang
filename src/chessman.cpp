#include "Chessman.h"

Chessman::Chessman()
{

}

Chessman::~Chessman()
{
    //dtor
}
//╠Ь
bool Arms::check(int x,int y,int x1,int y1)
{

    int dx=x1-x;
    int dy=y1-y;

    if((dy==0&&(dx==-1||dx==1))||(dx==0&&dy==1))
    {
        return true;

    }
    else
    {
        return false;

    }
}
//ез
bool Cannon::check(int x,int y,int x1,int y1)
{

    int dx=x1-x;
    int dy=y1-y;
    if(dx==0||dy==0)
    {


        return true;

    }
    else
    {


        return false;
    }


    return false;


}





