#include "Pao.h"
#include<iostream>
#include<ChessBoard.h>
using namespace std;
bool Pao::check(int x,int y,int x1,int y1)
{

   cout<< ChessBoard::board[x][y].getName()<<endl;



    return true;
}

Pao::Pao()
{
    //ctor
}

Pao::~Pao()
{
    //dtor
}
