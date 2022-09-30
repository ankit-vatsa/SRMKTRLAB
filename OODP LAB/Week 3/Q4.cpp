/* Define a class named Circle which can be constructed by a radius. The Circle class has two
methods for computing perimeter and area, respectively. */
#include <iostream>

using namespace std;

  class Circle
  {
    float radius, pi = 3.14;
    
    public:
    
    void getDetails()
    {
        cout<<"Enter Radius :\n";
        cin>>radius;
        
        cout<<"Entered radius is :"<<radius<<endl;
    }
    
    float perimeter()
    {
        int result = 2*pi*radius;
        
        return result;
    }
    
    float area()
    {
        int result = pi * radius * radius;
        
        return result;
    }
    
  };
  
int main() 
{
     Circle ankit;
     
    ankit.getDetails();
     
    cout<<"Perimeter is : "<<ankit.perimeter()<<endl;
     
    cout<<"Area is : "<<ankit.area()<<endl;

    return 0;
}
