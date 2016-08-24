

class Board
{
    private:
        int maxRow;
        int maxCol;
        //int pBoard[5][5];  //hard coded 5x5
    public:
        int getRow();
        int getCol();
        void init();
        void displayBoard();
        bool isValid(int userX, int userY);
        void placeInit(int userX, int userY, int type);
        void placeFinal(int userX, int userY, int type, int total);
        bool isFull();
        int pBoard[5][5];

};

void Board::placeFinal(int userX, int userY, int type, int total)
{
    if (total == 0)
    {
        pBoard[userX][userY] = type;
    }
    else
    {
        pBoard[userX][userY] = type * total;
    }

}

bool Board::isFull()
{
    for (int i=0; i < maxRow; i++)
    {
        for (int j = 0; j < maxCol; j++)
        {
            if (pBoard[i][j] == 0)
            {
                return false;
            }
        }
    }
    return true;
}

void Board::placeInit(int userX, int userY, int type)
{
    pBoard[userX][userY] = type;
}

bool Board::isValid(int userX, int userY)
{
    if (userX < 0 || userX >= maxRow || userY < 0 || userY >= maxCol)
    {
        return false;
    }
    return true;
}


int Board::getRow()
{
    return maxRow;
}

int Board::getCol()
{
    return maxCol;
}


void Board::init()
{

    cout << "Give me board height\n>";
    cin >> maxRow;
    cout << "Give me board width\n>";
    cin >> maxCol;
    for (int i = 0; i < maxRow; i++)
    {
        for (int j = 0; j < maxCol; j++)
        {
            pBoard[i][j] = 0;
        }
    }
}

void Board::displayBoard()
{
    for(int i = 0; i < maxRow; i++)
    {
        for (int j = 0; j < maxCol; j++)
        {
            cout << pBoard[i][j] << " | ";
        }
        cout << "\n";
    }
}

