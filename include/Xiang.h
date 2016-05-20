#ifndef XIANG_H
#define XIANG_H
#include<string>
using namespace std;
class Xiang
{
    public:
        Xiang();
        virtual ~Xiang();
        bool check(string color,int x,int y,int x1,int y1);
    protected:

    private:
};

#endif // XIANG_H
