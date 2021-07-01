#include <iostream>
#include "Ship.h"

using namespace std;


const int rows = 10;
const int columns = 10;

char letters[10] {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
int nums[10] {0 ,1, 2, 3, 4, 5, 6, 7, 8, 9};



char playerOne[rows][columns];     //[i] [j] row - column
char playerTwo[rows][columns];

int currentPlayer;
const char hit = 'X';



//this I have to re-write so it draws a board of either P1 or P2.

void DrawBoard()
{ //init
    for(int i = 0; i < rows; ++i)
        for(int j = 0; j < columns; ++j)
        {
            playerOne[rows][columns] = 254;
        }
    cout <<"#";
    for(int i = 0; i <= letters[i]; i++)
    {
        cout << "  " << letters[i];
    }   
    
    for (int i = 0; i < rows; ++i)
    {
        cout << "\n";
        cout << nums[i] << + " ";
        for(int j = 0; j < columns; ++j)
        {
            
           cout << "[" << playerOne[rows][columns]<< "]";
        }
        cout << '\n';
    }

    cout << endl;
    
}




//P1 array takes the input, how can I display the updated array?

void PlaceShips()
{
    int shipAmount = 1;
    char columnInput;
    int rowInput;


    cout << "Each player have 5 ships, choose your ships tactical position on the Naval Battlefield!!" <<endl;
    
    
    for(int i = 0; i <= shipAmount; i++)
    {
        cout << "P1 place your ship. Enter column a - j...";
        cin >> columnInput;
        int a = columnInput;
        int b = a - 97;
        
        
        cout <<endl;
        cout << "Enter row 0 - 9..." <<endl;
        cin >> rowInput;

        playerOne[b][rowInput] = 'O';
        
        
        cout <<"#";
        for(int i = 0; i <= letters[i]; i++)
        {
            cout << "  " << letters[i];
        }   
    
        for (int i = 0; i < rows; ++i)
        {
            cout << "\n";
            cout << nums[i] << + " ";
            for(int j = 0; j < columns; ++j)
            {
            
                cout << "[" << playerOne[j][i]<< "]";
            }
            cout << '\n';
        }

        cout << endl;
   
    }
    
}




int main(int argc, char* argv[])
{

    DrawBoard();
    PlaceShips();
    
    


    

    

    
    

    
    
    return 0;
}


// 2x 2D-array as boards p1 & p2 - Coordinates = g7, a2, d2 etc..

// p1 place 5 ships ---> chooses 5 cells ----> p2 place 5 ships..if placed ships = 10 || ships = 0.

// Game start


//p1 bombs(checks cell), if(player 2 array have ship || !ship) ---> clear this cell -----> print hit/miss ---> shipCounter --
//Game LOOP - 
//p2 bombs(checks cell), if(player 1 array have ship || !ship) ---> clear this cell -----> print hit/miss

//check win(if player1 shipCount == 0 || player2 shipCount == 0 ||) You win.



//drop bomb code
/*  cout << "Enter column a - j..." << endl;
    
cin >> columnInput;

cout << "Enter row 0 - 9..." << endl;

cin >> rowInput;

convertToCell(columnInput, rowInput);*/