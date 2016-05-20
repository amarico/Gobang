#include "Pao.h"
#include<iostream>
#include<ChessBoard.h>
using namespace std;
bool Pao::check(int x,int y,int x1,int y1)
{

    string descName=ChessBoard::board[x1][y1].getName();
    int dx=x1-x;
    int dy=y1-y;
    if(dx==0||dy==0)
    {
        if(descName=="non")
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
                if(tag==1)
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
                if(tag==1)
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

Pao::Pao()
{
    //ctor
}

Pao::~Pao()
{
    //dtor
}
