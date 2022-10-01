/* Write a C++ program to print whether the given number is positive
number or negative number. */

#include <iostream>

using namespace std;

class positiveornegative
{
    int num;
    
    public:
    
     void getDetails()
    {
      cout << "Enter a number : "<<endl;
      cin >> num;

      cout<<"Entered number is : "<<num<<endl;
    }
    
    void opr()
    {
            if(num>0)
        {
            cout<<"The given number "<<num<<" is a positive number";
        }
        if (num<0)
        {
            cout<<"The given number "<<num<<" is a negative number";
        }
    }
    
};

int main() {
    positiveornegative Ankit;
    
    Ankit.getDetails();
    
    Ankit.opr();

    return 0;
}
