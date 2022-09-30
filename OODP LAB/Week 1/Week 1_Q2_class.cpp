//Program Description 
// Write a C++ program to find those numbers which are divisible by 8 and multiple of 5, between 1000 and 2000 (both included)

#include <iostream>

using namespace std;

class Calculator
{
    int num1,num2;
public:
  void getDetails()
  {
      cout<<"Enter number 1"<<endl;
      cin>>num1;
      
      cout<<"Enter number "<<endl;
      cin>>num2;
  }
  void divnums();
};

void Calculator::divnums()
{ 
    cout<<"Numbers are : "<<endl;
      for(int i = num1; i<=num2; i++)
      { 
        if(i%8==0&&i%5==0) 
        { 
            cout<<i<<endl;
        }
      }
}

int main()
{
    Calculator object;
    
    object.getDetails();
    object.divnums();

return 0;
}
