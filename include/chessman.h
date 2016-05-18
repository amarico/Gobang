#ifndef CHESSMAN_H
#define CHESSMAN_H
#include<Point.h>

class Chessman
{
public:
    Chessman(Point board[10][9]);
    virtual ~Chessman();
    bool check();

    Point board[10][9];
protected:

private:
};
//这个是兵的规则
class Arms:public Chessman
{


public:
    Arms(Point board[10][9]);
    bool check(int x,int y,int x1,int y1);


};
//炮

class Cannon:public Chessman
{

public:
    Cannon(Point board[10][9]);
    bool check(int x,int y,int x1,int y1);


};








#endif // CHESSMAN_H
