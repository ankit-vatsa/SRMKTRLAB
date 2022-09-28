#include <iostream>

using namespace std;

int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}

int main()
{
    int num;
    
    cout<<"Enter the number you want the factorial of\n";
    cin>>num;
    
    cout<<"The factorial of "<<num<<" is : "<< factorial(num);
    
return 0;
}
