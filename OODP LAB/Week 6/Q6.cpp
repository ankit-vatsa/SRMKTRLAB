// 6.Write a C++ class Program to perform rational number arithmetic using operator
overloading.
#include <iostream>
using namespace std;

class operation
{
    int numerator, denominator;
    
    public:
    
    void getdetails()
    {
        cout<<"Enter numerator : "<<endl;
        cin>>numerator;
        cout<<"Enter denominator : "<<endl;
        cin>>denominator;
    }
    void printdetails()
    {
        cout<<"Numerator is : "<<numerator<<endl<<endl;
        cout<<"Denominator is : "<<denominator<<endl<<endl;
    }
    
    void operator + (operation para)
    {
        operation temp;
        temp.numerator = (numerator * para.denominator) + (denominator * para.numerator);
        temp.denominator = denominator * para.denominator;
        
        cout<<"Numerator is : "<<temp.numerator<<endl;
        cout<<"Denominator is : "<<temp.denominator<<endl;

    }
    
};

int main() {

    cout << "Hello world!"<<endl;
    cout << "Welcome to my program"<<endl<<endl;
    
    operation c1, c2;
    
    cout<<"For c1 : "<<endl;
    c1.getdetails();
    cout<<"For c2 : "<<endl;
    c2.getdetails();
    
    
    cout<<"After doing  c1 + c2 : "<<endl;
    
    c1 + c2;

    cout<<"So, we get our result. "<<endl;
    
    return 0;
}
