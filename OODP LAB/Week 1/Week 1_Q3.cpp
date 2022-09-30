/* Write a C++ program that take a number from user then output the power of this number. */
#include <iostream>

using namespace std;

int main() {
    int number,num,power;
    cout << "Welcome to this Calculator\n\n";
    cout << "You can calculate Power of a Number.\n\n";
    
    cout<<"Enter the number\n";
    cin>>num;
    
    number=num;
    
    cout<<"Enter the power\n";
    cin>>power;
    
    for(int i=1; i<power; i++)
    {
        num=num*number;
    }
    
    cout<<"Entered number is : "<<number<<endl;
    cout<<"Entered power is : "<<power<<endl;
    cout<<"So, the result is : "<<num<<endl;

    return 0;
}
