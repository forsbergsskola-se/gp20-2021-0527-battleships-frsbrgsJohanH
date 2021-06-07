#include <iostream>

using namespace std;


const int rows = 10;
const int columns = 10;

char letters[10] {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
int nums[10] {0 ,1, 2, 3, 4, 5, 6, 7, 8, 9};

char playerOne[rows][columns];     //[i] [j] row - column
char playerTwo[rows][columns];

void DrawBoard()
{ //init
    for(int i = 0; i < rows; ++i)
        for(int j = 0; j < columns; ++j)
        {
            playerOne[rows][columns] = 254;
        }
        
    cout << "   a  b  c  d  e  f  g  h  i  j" << endl;
    for (int i = 0; i < rows; ++i)
    {
        
        cout << nums[i] << + " ";
        for(int j = 0; j < columns; ++j)
        {
            
           cout << "[" << playerOne[rows][columns]<< "]";
        }
        cout << '\n';
    }

    cout << endl;
    
}



int main(int argc, char* argv[])
{

    DrawBoard();
    
    return 0;
}


// 2x 2D-array as boards p1 & p2 - Coordinates = g7, a2, d2 etc..

// p1 place 5 ships ---> chooses 5 cells ----> p2 place 5 ships..if placed ships = 10 || ships = 0.

// Game start


//p1 bombs(checks cell), if(player 2 array have ship || !ship) ---> clear this cell -----> print hit/miss ---> shipCounter --
//Game LOOP - 
//p2 bombs(checks cell), if(player 1 array have ship || !ship) ---> clear this cell -----> print hit/miss

//check win(if player1 shipCount == 0 || player2 shipCount == 0 ||) You win.