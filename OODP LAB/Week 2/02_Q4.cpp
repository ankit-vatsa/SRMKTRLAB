/* Write C++ program to find the sum of positive numbers, if the user enters
a negative numbers, break ends the loop the negative number entered is not
added to sum. */

#include <iostream>

using namespace std;

class sumofpositivenum
{
    int num=0,sum=0;
  
    public:
    
     void getDetails ()
    {
      cout<<"Enter a number : "<<endl; 
      cin>>num;
    }
    
    int ope()
    {
        if (num>=0)
        {
            sum+=num;
            return sum;
        }
        else 
        {
            return 0;
        }
    }
    
    void print_sum()
    {
        
        cout<<"Sum is : "<< sum <<endl;
    }
    
};

int main() 
{
    sumofpositivenum Ankit;
    
    for (int i=0; ; i++)
    {
        Ankit.getDetails();
        
        if (Ankit.ope() == 0)
        {
            break;
        }
    }
    
    Ankit.print_sum();

    return 0;
}
