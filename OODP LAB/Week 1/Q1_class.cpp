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
  
  int add()
    {
        result = num1 + num2;
        return result;
    }    
  int sub()
    {
        result = num1 - num2;
        return result;
    }    
  int mul()
    {
        result = num1 * num2;
        return result;
    }    
  int div()
    {
        result = num1 / num2;
        return result;
    }    

};

int main()
{   
 Menu ankit;
 
 ankit.getDetails();
 cout<<"So the result is : "<<ankit.add()<<endl;;
 cout<<"So the result is : "<<ankit.sub()<<endl;;
 cout<<"So the result is : "<<ankit.mul()<<endl;;
 cout<<"So the result is : "<<ankit.div()<<endl;;
 
 return 0;   
}
