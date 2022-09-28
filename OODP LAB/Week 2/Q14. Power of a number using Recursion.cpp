/* Write a program to Calculate Number Power Using Recursion in C++. */
#include <iostream>

using namespace std;

int power_of (int number, int power)
{
    if (power == 1)
    {
        return number;
    }
    if (power == 0)
    {
        return 1;
    }
    else
    {
        return (number * power_of(number,power-1));
    }
}
int main()
{
    int num,power;
    
    cout<<"Enter the number you want the power of\n";
    cin>>num;
    
    cout<<"Enter the power\n";
    cin>>power;
    
    cout<<"The factorial of "<<num<<" is : "<< power_of(num,power);
    
return 0;
}
