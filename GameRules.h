#include<iostream>
using namespace std;

class Board;

class GameRules
{
    public:
        int neighbours(int row, int col, Board current)

};

int neighbours(int row, int col, Board current)
{
    //calculates optimum capture and clears what is captured
    int neighbours = 0;
    int up = current.pBoard[row-1][col];
    int down = current.pBoard[row+1][col];
    int left = current.pBoard[row][col-1];
    int right = current.pBoard[row][col+1];

    if (row == 0)
    {
        up = 0;
    }

    if (row == current.getRow()-1)
    {
        down = 0;
    }

    if (col == 0)
    {
        left = 0;
    }

    if (col == current.getCol()-1)
    {
        right = 0;
    }

    //optimumNumbers(up, down, left, right);
    /** plan
    * check addition of neigbours
    *if <= 6, clear neighbours and return
    * else check combinations of 2s and 3s
    * ignore any combinations greater than 6, return greatest combination <=6
    */
    neighbours = std::abs(up) + std::abs(down) + std::abs(left) + std::abs(right);

    cout << endl << "UP is " << up << " down is " <<  down << " left is " << left << " right is " << right << endl;
    //cout << endl << "neighbours = " << neighbours << endl;



    return neighbours;

}
