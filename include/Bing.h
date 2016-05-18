#ifndef BING_H
#define BING_H
#include<chessman.h>
#include<string>
using namespace std;
class Bing:public Chessman
{
    public:
        Bing();
        virtual ~Bing();

        bool check(string color,int x,int y,int x1,int y1);
    protected:

    private:
};

#endif // BING_H
