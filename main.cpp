#include <iostream>
#include<User.h>
#include<ChessBoard.h>
using namespace std;

int main()
{

    //��ʼ���û�
    User user1("wen","black","");
    User user2("long","white","");
    //��ʼ������
    ChessBoard Board;
    Board.display();
    string color="black";
    //��������
    do
    {

        if(color=="black")
        {
            int x,y,x1,y1;
            cout<<"ִ����ʱ��"<<endl;
            cin>>x>>y>>x1>>y1;
            if(Board.move(color,x,y,x1,y1))
            {

                Board.replace(x,y,x1,y1);
                color="white";

            }
            else
            {

                cout<<"����ƶ������⣬����������"<<endl;

            }

        }
        else
        {
            int x,y,x1,y1;
            cout<<"ִ����ʱ��"<<endl;
            cin>>x>>y>>x1>>y1;
             if(Board.move(color,x,y,x1,y1))
            {

                Board.replace(x,y,x1,y1);
                color="black";

            }
            else
            {

                cout<<"����ƶ������⣬����������"<<endl;

            }
        }
        Board.display();
    }
    while(1);
    return 0;
}
