#ifndef CHESSBOARD_H
#define CHESSBOARD_H
#include<Point.h>
#include<string>
using namespace std;
class ChessBoard
{
public:
    ChessBoard();
    virtual ~ChessBoard();
    void display();
    bool move(string userColor,int x,int y,int x1,int y1);
    void replace(int x,int y,int x1,int y1);
    static  Point board[10][9];

protected:

private:
};


#endif // CHESSBOARD_H
