#ifndef CHESSMAN_H
#define CHESSMAN_H
#include<Point.h>

class Chessman
{
public:
    Chessman();
    virtual ~Chessman();
    bool check();
protected:

private:
};
//����Ǳ��Ĺ���
class Arms:public Chessman
{


public:

    bool check(int x,int y,int x1,int y1);


};
//��

class Cannon:public Chessman
{

public:

    bool check(int x,int y,int x1,int y1);


};








#endif // CHESSMAN_H
