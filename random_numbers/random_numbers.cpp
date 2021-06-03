#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;


int main(int argc, char* argv[])
{
    int numberStorage[100] = {0};
   
        
    srand((unsigned) time(0));  //always changing, will give you a different seed = not the same sequence.
    int randomNum;              
    for (int i = 0; i < 100; i++)
    {
        randomNum = (rand() % 20) + 1;
        numberStorage[i] = randomNum;

      cout << randomNum << endl;
    }

   
    
   
    return 0;
}
