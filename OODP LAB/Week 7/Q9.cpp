/* Write a C++ Program to Access Protected Data Member using Inheritance. */
#include <iostream>
using namespace std;

class Maths
{   protected:
    int num; //Protected data member
    
    public:
    void getdetails()
    {
        cout<<"Enter a number : "<<endl;
        cin>>num;
    }
    void printdetails()
    {
        cout<<"Entered number is : "<<endl<<num<<endl;
    }
};

class Square:public Maths
{
    public:
    int squareofnum()
    {
        return num*num;    //Accessing protected data member of the Maths Class using the Multilevel Inheritance.
    }
    void sqprint_details()
    {
        cout<<"Square of the number is : "<<endl<<squareofnum()<<endl;
    }
};

int main() 
{
    Square number;
    number.getdetails();
    number.sqprint_details();

    return 0;
}

/*
    Sample Input:
      Enter a number : 
      5
    Sample Output:
      Square of the number is : 
      25
*/
