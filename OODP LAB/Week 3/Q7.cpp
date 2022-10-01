/* Print the average of three numbers entered by the user by creating a class named 'Average'
having a function to calculate and print the average without creating any object of the
Average class. */
#include <iostream>

using namespace std;

  class Average
  {
    public:
    
    static float avg(int num1, int num2, int num3)
    {
        float result = (num1+num2+num3)/3;
        return result;
    }
    
  };
  
int main() 
{
    int a, b, c;
        cout<<"Enter Number 1 :\n";
        cin>>a;
        cout<<"Enter Number 2 :\n";
        cin>>b;
        cout<<"Enter Number 3 :\n";
        cin>>c;
        
        cout<<"Number 1 is : "<<a<<endl;
        cout<<"Number 2 is : "<<b<<endl;
        cout<<"Number 3 is : "<<c<<endl;
        
        cout<<"Average of the given three numbers is : "<<Average::avg(a,b,c)<<endl;
        
    
    return 0;
}
