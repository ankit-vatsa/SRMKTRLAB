/* Write a program to checks whether a year (integer) entered by the user is a
leap year or not. Using if...else Ladder */
#include <iostream>

using namespace std;

  class leapyear
  {
      int year;
      
    public:
    
    void getDetails()
    {
      cout << "Enter a year: "<<endl;
      cin >> year;
        
      cout<<"Entered year is : "<<year;
    }
     

    string fun_leap()
    {
      if (year % 400 == 0) {
        return " is a leap year.";
      }

      else if (year % 100 == 0) {
        return " is not a leap year.";
      }
      
      else if (year % 4 == 0) {
        return " is a leap year.";
      }
      else {
        return " is not a leap year.";
      }
    }
    
  };
  
int main() 
{
    leapyear ankit;
    
    ankit.getDetails();
    
    cout<<ankit.fun_leap();

    return 0;
}
