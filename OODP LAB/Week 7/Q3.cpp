/* Write a C++ program to demonstrate example of hierarchical inheritance to get square and cube of a number.  */
#include <iostream>
using namespace std;

class Maths
{   protected:
    int num;
    
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
        return num*num;
    }
    void sqprint_details()
    {
        cout<<"Square of the number is : "<<endl<<squareofnum()<<endl;
    }
};

class Cube:public Square
{
    public:
    int cubeofnum()
    {
       return squareofnum()*num; 
    }
    void cuprintdata()
    {
        cout<<"Cube of the number is : "<<endl<<cubeofnum()<<endl;
    }
};

int main() 
{
    Cube number;
    number.getdetails();
    number.sqprint_details();
    number.cuprintdata();

    return 0;
}

/*
    Sample Input:
      Enter a number : 
      5
    Sample Output:
      Square of the number is : 
      25
      Cube of the number is : 
      125
*/
