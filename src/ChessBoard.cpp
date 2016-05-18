#include "ChessBoard.h"
#include<iostream>
#include<Point.h>
#include<chessman.h>
using namespace std;
ChessBoard::ChessBoard()
{
    for(int x=0; x<10; x++)
    {

        for(int y=0; y<9; y++)
        {


            Point bornPoint("non","non","non");
            board[x][y]=bornPoint;




        }
    }
    Point bornPoint("black","arms","BIN");
    board[0][0]=bornPoint;
    Point bornPoint1("white","bing","PAO");
    board[1][1]=bornPoint1;

}
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
            if(tag=="arms")
            {
                Arms arms(board[10][9]);
                return arms.check(x,y,x1,y1);


            }
            else if(tag=="cannon"){



            }
            else
            {

            }

            return true;

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

    /*board[x][y].setName("non");
    board[x][y].setType("non");
    board[x][y].setColor("non");*/

}
ChessBoard::~ChessBoard()
{
    //dtor
}

