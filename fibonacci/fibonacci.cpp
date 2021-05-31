#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

void IterateFibonacci(int term)
{
    int n1 = 0;
    int n2 = 1;
    int next = 0;

    for(int i = 0; i < term; i++)
    {
        cout << next << " ";

        next = n1 + n2;
        n1 = n2;
        
        n2 = next;
    }
}


int Fibonacci(int n)
{
   
    if (n == 1 || n == 0)
        return n;
    else
    {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
        
}

    
int main(int argc, char* argv[])
{
    
    int number;
    int i = 0;
    cout<<"Enter a Fibonacci number to see its sequence:";
    cin>>number;
    cout<<"\nFibonacci Series is: \n";

    auto start = high_resolution_clock::now();
    IterateFibonacci(number);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << "\n Time taken by iterative function: "
        << duration.count() << " milliseconds" << endl;
    

    auto start2 = high_resolution_clock::now();
    while(i < number)
    {
        cout << " " << Fibonacci(i);
        i++;
    } 
    
   
    auto stop2 = high_resolution_clock::now();
    auto duration2 = duration_cast<milliseconds>(stop2 - start2);

    

    cout << "\nTime taken by recursive function: "
        << duration2.count() << " milliseconds" << endl;
    

    
    
    return 0;
}
