/* Write C++ program to find if an integer is positive, negative or zero. */
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
    if (num==0)
    {
        cout<<"The number zero is neither positive nor negative.";
    }

return 0;
}
