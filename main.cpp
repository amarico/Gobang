#include <iostream>
#include<User.h>
#include<ChessBoard.h>
using namespace std;

int main()
{

    //初始化用户
    User user1("wen","black","");
    User user2("long","white","");
    //初始化棋盘
    ChessBoard Board;
    Board.display();
    string color="black";
    //不断下棋
    do
    {

        if(color=="black")
        {
            int x,y,x1,y1;
            cout<<"执黑者时间"<<endl;
            cin>>x>>y>>x1>>y1;
            if(Board.move(color,x,y,x1,y1))
            {

                Board.replace(x,y,x1,y1);
                color="white";

            }
            else
            {

                cout<<"你的移动有问题，请重新输入"<<endl;

            }

        }
        else
        {
            int x,y,x1,y1;
            cout<<"执白者时间"<<endl;
            cin>>x>>y>>x1>>y1;
             if(Board.move(color,x,y,x1,y1))
            {

                Board.replace(x,y,x1,y1);
                color="black";

            }
            else
            {

                cout<<"你的移动有问题，请重新输入"<<endl;

            }
        }
        Board.display();
    }
    while(1);
    return 0;
}
