#include <iostream>
using namespace std;

class Shapes
{   string shape_name;
    
    public:
    void getdetails()
    {
        cout<<"Enter name of the shape : "<<endl;
        cin>>shape_name;
    }
    void printdetails()
    {
        cout<<"Entered shape is : "<<endl<<shape_name<<endl;
    }
};

class Area
{
    float length[5];    
    
    public:
    
    void square()
    {
        cout<<"Enter side of Square : "<<endl;
        cin>>length[0];
        
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
