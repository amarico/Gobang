#include "Chessman.h"

Chessman::Chessman(Point myBoard[10][9])
{
    for(int x=0; x<10; x++)
    {

        for(int y=0; y<9; y++)
        {



            board[x][y]=myBoard[x][y];




        }
    }
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

        if(dx==0)
        {

            for(int i=x+1; i<x1; i++)
            {



            }

        }
        else
        {



        }

        return true;

    }
    else
    {


        return false;
    }


    return false;


}





