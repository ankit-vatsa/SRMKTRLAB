/* Write a program to find the prime numbers between100 to 500. */

#include <iostream>

using namespace std;

class primenum
{
    int num;
    public:
    
     void getDetails(int number)
    {
      num = number;
    //   cout<<"Entered number is : "<<num;
    }
    
    string opt()
    {
            bool is_prime = true;

              if (num == 0 || num == 1) {
                is_prime = false;
              }
            
              for (int i = 2; i <= num/2; ++i) {
                if (num % i == 0) {
                  is_prime = false;
                  break;
                }
              }
            
              if (is_prime)
              {
                return " is a prime number";
              }
               else
               {
                    return " ";
               }
                  
    }
    
};

int main() 
{
    primenum Ankit;
    
    for (int i=100; i<=200; i++)
    {
        Ankit.getDetails(i);
        
        if (Ankit.opt() != " ")
        {
             cout<<"Number : "<< i << Ankit.opt()<<endl;
        }
    }

    return 0;
}
