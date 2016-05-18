#ifndef PLAYER_H
#define PLAYER_H


class player
{
    public:
        player();
        player(int myx,int myy);
        virtual ~player();
        void show();

    protected:
        int x;
        int y;

    private:
};

#endif // PLAYER_H
