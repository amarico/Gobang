#include "Che.h"
#include<iostream>
#include<ChessBoard.h>

bool Che::check(int x,int y,int x1,int y1)
{

    int dx=x1-x;
    int dy=y1-y;
    if(dx==0||dy==0)
    {

        if(dx==0)
        {
            int tag=0;

            for(int i=(y>y1?y1:y)+1; i<(y>y1?y:y1); i++)
            {

                if(ChessBoard::board[x][i].getName()!="non")
                {
                    tag=1;
                    break;
                }
            }
            if(tag==0)
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
            int tag=0;

                for(int i=(x>x1?x1:x)+1; i<(x>x1?x:x1); i++)
                {

                    if(ChessBoard::board[i][y].getName()!="non")
                    {
                        tag=1;
                        break;
                    }
                }
                if(tag==0)
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

        return false;
    }




}














Che::Che()
{
    //ctor
}

Che::~Che()
{
    //dtor
}
