#include <iostream>

using namespace std;

class Menu
{
  int num1, num2, result;
  public:
  void getDetails()
  {
      cout<<"Enter number 1"<<endl;
      cin>>num1;
      
      cout<<"Enter number "<<endl;
      cin>>num2;
  }
  
  void add()
    {
        result = num1 + num2;
        cout<<"So the result is : "<<result<<endl;
    }    
  void sub()
    {
        result = num1 - num2;
        cout<<"So the result is : "<<result<<endl;
    }    
  void mul()
    {
        result = num1 * num2;
        cout<<"So the result is : "<<result<<endl;
    }    
  void div()
    {
        result = num1 / num2;
        cout<<"So the result is : "<<result<<endl;
    }    

};

int main()
{   
 Menu ankit;
 
 ankit.getDetails();
 ankit.add();
 ankit.sub();
 ankit.mul();
 ankit.div();
 
 return 0;   
}
