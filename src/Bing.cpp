#include "Bing.h"
#include<string>
using namespace std;
bool Bing::check(string color,int x,int y,int x1,int y1)
{

    int dx=x1-x;
    int dy=y1-y;
    if(color=="white")
    {

        if(dx>=0)
        {
            if(x<=4)
            {
                if(dy==0&&dx==1)
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

                if(dx==0)
                {
                    if(dy==-1||dy==1)
                    {
                        return true;
                    }
                    else
                    {

                        return false;
                    }

                }
                else if(dx==1)
                {

                    if(dy==0)
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

                    return false;
                }

            }

        }
        else
        {

            return false;
        }
    }
    else if(color=="black")
    {

        if(dx<=0)
        {

            if(x>=5)
            {
                if(dy==0)
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

                if(dx==-1)
                {
                    if(dy==0)
                    {
                        return true;
                    }
                    else
                    {

                        return false;
                    }

                }
                else if(dx==0)
                {
                    if(dy==1||dy==-1)
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

        return false;
    }


}

Bing::Bing()
{
    //ctor
}

Bing::~Bing()
{
    //dtor
}
