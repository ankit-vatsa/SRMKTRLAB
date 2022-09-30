#include <iostream>

using namespace std;

  class Menu
  {
  int num, result;
    
    public:
    
    void getDetails()
    {
        cout<<"Enter the number\n";
        cin>>num;
    }
    
    int powof()
    {
        int power, temp = num;
    
        cout<<"Enter the power\n";
        cin>>power;
        
        for(int i=1; i<power; i++)
        {
            num=num*temp;
        }
        
        result = num;

    cout<<"Entered number is : "<<temp<<endl;
    cout<<"Entered power is : "<<power<<endl;

        return result;
    }
  };
  
int main() 
{
    cout << "Welcome to this Calculator\n\n";
    cout << "You can calculate Power of a Number.\n\n";
    
    Menu test;
  
    test.getDetails();
  
    int print = test.powof();
  
    cout<<"So, the result is : "<<print<<endl;

    return 0;
}
