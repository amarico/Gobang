#include "Xiang.h"
#include<stdlib.h>
#include<ChessBoard.h>
bool Xiang::check(string color,int x,int y,int x1,int y1)
{

    int dx=x1-x;
    int dy=y1-y;
    if(abs(dx)==2&&abs(dy)==2)
    {


        if(dx<0)
        {
            if(dy<0)
            {
                if(ChessBoard::board[x-1][y-1].getName()=="non")
                {

                    if(color=="white")
                    {
                        if(x1<=5)
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
                        if(x1>5)
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
            else
            {

                if(ChessBoard::board[x-1][y+1].getName()=="non")
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
                if(ChessBoard::board[x+1][y-1].getName()=="non")
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

                if(ChessBoard::board[x+1][y+1].getName()=="non")
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
Xiang::Xiang()
{
    //ctor
}

Xiang::~Xiang()
{
    //dtor
}
