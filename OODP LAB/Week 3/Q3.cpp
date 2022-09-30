/* Write a C++ program to define a class Date that holds day, month and year as data
members. Also write necessary member methods to
a) Read a date
b) Print a date in different formats
c) Find the date exactly one week after the given date. e.g. If the given date is 30-10-
2013, then the resultant date is 6-11-2013. */
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
    
    void result_date()
    {
        
    }
  };
  
int main() 
{
     Date ankit;
     
     ankit.read_date();
     
     ankit.print_date();

    return 0;
}
