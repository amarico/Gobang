#include <iostream>
#include<User.h>
#include<ChessBoard.h>
#include<string>

using namespace std;

int main()
{

    //��ʼ���û�
    User user1("wen","black","");
    User user2("long","white","");
    //��ʼ������
    ChessBoard Board;
    Board.display();
    string color="white";
    //��������
    do
    {

        if(color=="black")
        {
            int x,y,x1,y1;
            cout<<"B�ƶ�ʱ��"<<endl;
            cin>>x>>y>>x1>>y1;
            if(Board.move(color,x,y,x1,y1))
            {
                if(ChessBoard::board[x1][y1].getType()=="jiang")
                {

                    cout<<"the  "<<user1.username<<"  win"<<endl;
                    break;
                }
                else
                {

                    Board.replace(x,y,x1,y1);
                    color="white";

                }


            }
            else
            {

                cout<<"����ƶ������⣬����������"<<endl;

            }

        }
        else
        {
            int x,y,x1,y1;
            cout<<"A�ƶ�ʱ��"<<endl;
            cin>>x>>y>>x1>>y1;
            if(Board.move(color,x,y,x1,y1))
            {

                if(ChessBoard::board[x1][y1].getType()=="jiang")
                {

                    cout<<"the  "<<user1.username<<"  win"<<endl;
                    break;
                }
                else
                {
                    Board.replace(x,y,x1,y1);
                    color="black";
                }

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


