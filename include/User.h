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

    //�û���ľ�������
    void show();


protected:
    //�û�������ݳ�Ա
    string username;
    string  color;
    string result;

private:
};

#endif // USER_H
