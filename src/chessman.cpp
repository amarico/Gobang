#include "Chessman.h"
#include<ChessBoard.h>
Chessman::Chessman()
{

}

Chessman::~Chessman()
{
    //dtor
}
//��
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
//��
bool Cannon::check(int x,int y,int x1,int y1)
{

return false;
}





