#include<iostream>
#include "User.h"
using namespace std;
User::User()
{
    //ctor
}
User::User(string myusername,string mycolor,string myresult)
{

    username=myusername;
    color=mycolor;
    result=myresult;


}
void User::show()
{
    cout<<color<<endl;
}
User::~User()
{
    //dtor
}
