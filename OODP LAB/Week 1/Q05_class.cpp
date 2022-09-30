/* Printing string in reverse */
#include <iostream>

using namespace std;

  class Reverse_String
  {
    string str;
    
    public:
    
    void getDetails()
    {
        cout<<"Enter string :\n";
        cin>>str;
    }
    
    void printstr()
    {
        cout<<"String is : "<<str<<endl;
    }
    
    void rev()
    {
        int i;
        
        cout<<"Printing string in reverse\n";
        
        for(i = str.length() - 1; i >= 0; i--)
        {
          	cout<<str[i];
        }
    }
  };
  
int main() 
{
    cout << "Welcome to String Reversing Tool\n\n";

    Reverse_String test;
    
    test.getDetails();
    
    test.printstr();
    
    test.rev();

    return 0;
}
