#include "Ma.h"
#include<stdlib.h>
#include<iostream>
#include<ChessBoard.h>
bool Ma::check(int x,int y,int x1,int y1)
{
    int dx=x1-x;
    int dy=y1-y;
    if((abs(dx)==2&&abs(dy)==1)||(abs(dy)==2&&abs(dx)==1))
    {

        if(abs(dx)==2)
        {

            if(dx<0)
            {

                if(ChessBoard::board[x-1][y].getName()=="non")
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
                if(ChessBoard::board[x+1][y].getName()=="non")
                {

                    return true;

                }
                else
                {
                    return false;

                }

            }


        }
        else
        {

            if(dy<0)
            {

                if(ChessBoard::board[x][y-1].getName()=="non")
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
                if(ChessBoard::board[x][y+1].getName()=="non")
                {

                    return true;

                }
                else
                {
                    return false;

                }

            }






        }

    }
    else
    {

        return false;
    }

}

Ma::Ma()
{
    //ctor
}

Ma::~Ma()
{
    //dtor
}
