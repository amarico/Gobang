#ifndef POINT_H
#define POINT_H
#include<string>
using namespace std;
class Point
{
public:
    Point();
    Point(string mycolor,string mytype,string name);
    virtual ~Point();
    string getColor();
    string getType();
    string getName();
    void setColor(string myColor);
    void setType(string myType);
    void setName(string myName);
protected:
    string name;
    string color;
    string type;

private:
};

#endif // POINT_H
