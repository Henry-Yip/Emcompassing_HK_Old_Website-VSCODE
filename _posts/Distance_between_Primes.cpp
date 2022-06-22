#include <iostream>
using namespace std;

bool SinglePrime(int number)
{
    for (int i=2; i<number; i++)
    {
        if (number%i==0)
        {
            return false;
        }
    }
    return true;    
}

bool DoublePrime(int number)
 {
    for (int number=0;;number++)
    if (SinglePrime(i) && SinglePrime(i+number))
    {
        number=i+number; 
        cout<<number; 
        return true;   
    }
return false;
 }


int main()
{   
   {
    int number=0;
    if (DoublePrime(number))
    {
         
    }  

 }
}