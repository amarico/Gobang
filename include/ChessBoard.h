#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include<Point.h>
using namespace std;
class ChessBoard
{
public:
    ChessBoard();
    virtual ~ChessBoard();
    void display();
    //ÖÐ¹ú
    bool move(string userColor,int x,int y,int x1,int y1);
    void replace(int x,int y,int x1,int y1);
    Point board[10][9];
protected:

private:
};

#endif // CHESSBOARD_H
