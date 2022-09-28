/* Write a C++ program to print whether the given number is positive number or negative number. */
#include <iostream>

using namespace std;

int main()
{
    
    int num;
  
    cout<<"Enter the number\n";
    cin>>num;

    if(num>0)
    {
        cout<<"The given number "<<num<<" is a positive number";
    }
    
    if (num<0)
    {
        cout<<"The given number "<<num<<" is a negative number";
    }

return 0;
}
