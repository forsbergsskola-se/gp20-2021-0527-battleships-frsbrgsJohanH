#include <iostream>

using namespace std;




char playerOne[10][10];     //[i] [j] row - column
char playerTwo[10][10];




int main(int argc, char* argv[])
{
   for(int i = 0; i < 10; ++i)
       for(int j = 0; j <10; ++j)
       {
           playerOne[i][j] = 'E';
       }

    for (int i = 0; i < 10; ++i)
    {
        for(int j = 0; j < 10; ++j)
        {
            cout << playerOne[i][j];
        }
        cout << '\n';
    }

    cout << endl;
  
    return 0;
}


// 2x 2D-array as boards p1 & p2 - Coordinates = g7, a2, d2 etc..

// p1 place 5 ships ---> chooses 5 cells ----> p2 place 5 ships..if placed ships = 10 || ships = 0.

// Game start


//p1 bombs(checks cell), if(player 2 array have ship || !ship) ---> clear this cell -----> print hit/miss ---> shipCounter --
//Game LOOP - 
//p2 bombs(checks cell), if(player 1 array have ship || !ship) ---> clear this cell -----> print hit/miss

//check win(if player1 shipCount == 0 || player2 shipCount == 0 ||) You win.