#include "Point.h"

Point::Point()
{
    //ctor
}
Point::Point(string mycolor,string mytype,string myname)
{
    color=mycolor;
    type=mytype;
    name=myname;
}
string Point::getColor()
{

    return color;
}
string Point::getType()
{
    return type;
}
string Point::getName()
{
    return name;
}
void Point::setColor(string myColor)
{

    color=myColor;
}
void Point::setName(string myName)
{

    name=myName;
}
void Point::setType(string myType)
{

    type=myType;
}
Point::~Point()
{
    //dtor
}
