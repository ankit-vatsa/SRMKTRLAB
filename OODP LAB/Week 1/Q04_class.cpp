#include <iostream>

using namespace std;

  class Mnm_Calculator
  {
    int num1, num2, num3;
    
    public:
    
    void getDetails()
    {
        cout<<"Enter Number 1 :\n";
        cin>>num1;
        cout<<"Enter Number 2 :\n";
        cin>>num2;
        cout<<"Enter Number 3 :\n";
        cin>>num3;
    }
    
    int rev()
    { int a = num1, b = num2, c = num3;
         if (a < b && a < c) 
         {
            return a;
         } 
         else if (b < a && b < c)  
         {
            return b;
         } 
         else 
         {
            return c;
         }
    }
  };
  
int main() 
{
    cout << "Welcome to Minimum Value Finderl\n\n";

     Mnm_Calculator ankit;
     
     ankit.getDetails();
     
     int value = ankit.rev();
     
     cout<<"Minimum value between the given three inputs is : "<<value<<endl;

    return 0;
}
