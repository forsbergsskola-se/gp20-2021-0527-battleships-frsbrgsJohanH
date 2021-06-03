#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;


int main(int argc, char* argv[])
{
    int numberStorage[100] = {0};
    int count[21] {0};
        
    srand((unsigned) time(0));  //always changing, will give you a different seed = not the same sequence.
    int randomNum;              
    for (int i = 0; i < 100; i++)
    {
        randomNum = (rand() % 20) + 1;
        numberStorage[i] = randomNum;
        count[numberStorage[i]]++;

        
    }

    for(int i = 0; i < 21; i++)
    {
        cout << "number "<<i<< +" ------> "<<count[i]<< + " times"<<endl;

        //cout <<count[i]<< + " occurred"<<i<<endl;
    }


  

   
    
   
    return 0;
}
