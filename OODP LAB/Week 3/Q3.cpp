/* Write a C++ program to define a class Date that holds day, month and year as data
members. Also write necessary member methods to
a) Read a date
b) Print a date in different formats */
#include <iostream>

using namespace std;

  class Date
  {
    int day, month, year;
    
    public:
    
    void read_date()
    {
        cout<<"Enter Day :\n";
        cin>>day;
        cout<<"Enter Month :\n";
        cin>>month;
        cout<<"Enter Year :\n";
        cin>>year;
    }
    
    void print_date()
    {
        cout<<"Entered date is : "<<day<<"-"<<month<<"-"<<year<<endl;
    }
    
  };
  
int main() 
{
     Date ankit;
     
     ankit.read_date();
     
     ankit.print_date();

    return 0;
}
