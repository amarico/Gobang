#include "ChessBoard.h"
#include<iostream>
#include<Point.h>
#include<chessman.h>
#include<Bing.h>
#include<Pao.h>
#include<Che.h>
#include<Ma.h>
using namespace std;
Point *pp=new Point("non","non","non");
Point *p=new Point("white","che","车A");
Point *p1=new Point("white","ma","马A");
Point *p2=new Point("white","xiang","象A");
Point *p3=new Point("white","shi","士A");
Point *p4=new Point("white","jiang","将A");
Point *p5=new Point("white","pao","炮A");
Point *p6=new Point("white","bing","兵A");


Point *p01=new Point("black","che","车B");
Point *p11=new Point("black","ma","马B");
Point *p21=new Point("black","xiang","象B");
Point *p31=new Point("black","shi","士B");
Point *p41=new Point("black","jiang","将B");
Point *p51=new Point("black","pao","炮B");
Point *p61=new Point("black","bing","兵B");

Point ChessBoard::board[10][9]=
{
    *p,*p1,*p2,*p3,*p4,*p3,*p2,*p1,*p,
    *pp,*pp,*pp,*pp,*pp,*pp,*pp,*pp,*pp,
    *pp,*p5,*pp,*pp,*pp,*pp,*pp,*p5,*pp,
    *p6,*pp,*p6,*pp,*p6,*pp,*p6,*pp,*p6,
    *pp,*pp,*pp,*pp,*pp,*pp,*pp,*pp,*pp,
    *pp,*pp,*pp,*pp,*pp,*pp,*pp,*pp,*pp,
    *p61,*pp,*p61,*pp,*p61,*pp,*p61,*pp,*p61,
    *pp,*p51,*pp,*pp,*pp,*pp,*pp,*p51,*pp,
    *pp,*pp,*pp,*pp,*pp,*pp,*pp,*pp,*pp,
    *p01,*p11,*p21,*p31,*p41,*p31,*p21,*p11,*p01,

};

void ChessBoard::display()
{

    for(int x=0; x<10; x++)
    {
        cout<<"...";
        for(int y=0; y<9; y++)
        {

            if(board[x][y].getName()=="non")
            {
                cout<<x<<"."<<y<<"...";
            }
            else
            {

                cout<<board[x][y].getName()<<"...";
            }


        }
        if(x==4) cout<<endl;
        cout<<endl;
    }

}

bool ChessBoard::move(string userColor,int x,int y,int x1,int y1)
{

    if(board[x][y].getColor()==userColor)
    {

        if(board[x1][y1].getColor()==userColor)
        {

            return false;
        }
        else
        {
            string tag=board[x][y].getType();

            //此处处理的是兵的情况
            if(tag=="bing")
            {
                Bing bing;
                return bing.check(userColor,x,y,x1,y1);


            }
            else if(tag=="pao")
            {
                Pao pao;
                return pao.check(x,y,x1,y1);
            }
            else if(tag=="che")
            {

                Che che;
                return che.check(x,y,x1,y1);


            }
            else if(tag=="ma"){


               Ma ma;
               return ma.check(x,y,x1,y1);
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

void ChessBoard::replace(int x,int y,int x1,int y1)
{

    board[x1][y1]=board[x][y];
    Point bornPoint("non","non","non");
    board[x][y]=bornPoint;

}
ChessBoard::ChessBoard()
{

}

ChessBoard::~ChessBoard()
{
    //dtor
}

