#include<iostream>
using namespace std;

class Player
{
    private:
        int xPos;
        int yPos;
        int type;
        string name;
    public:
        Player(string username, int player);
        void play();
        int getXPos();
        int getYPos();
        int getType();
};



Player::Player(string username, int player)
{
    name = username;
    if (player == 1)
    {
        type = 1;
    }
    if (player == 2)
    {
        type = -1;
    }
}

int Player::getType()
{
    return type;
}

int Player::getXPos()
{
    return xPos;
}

int Player::getYPos()
{
    return yPos;
}

void Player::play()
{
    cout << "Give me your x co-ordinate " << name << "\n>";
    cin >> xPos;
    xPos -= 1;
    cout << "Give me your y co-ordinate\n>";
    cin >> yPos;
    yPos -= 1;
}
