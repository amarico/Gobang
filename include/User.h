#ifndef USER_H
#define USER_H
#include<string>
using namespace std;
class User
{
public:
    User();
    User(string myusername,string mycolor,string myresult);
    virtual ~User();

    //用户类的具体内容
    void show();


protected:
    //用户类的数据成员
    string username;
    string  color;
    string result;

private:
};

#endif // USER_H
