// 3. Write a C++ program to Swap variables using binary operator overloading.
#include <iostream>
using namespace std;

class swapping
{
    int number;
    
    public:
    
    void getdetails()
    {
        cout<<"Enter number : "<<endl;
        cin>>number;
    }
    
    void printdetails()
    {
        cout<<"Number : "<<number<<endl<<endl;
    }
    
    void operator = (swapping para)
    {
        swapping temp;
        temp.number = para.number;
        
        para.number = number;
        number = temp.number;
        
        
       cout<<"c1 is : "<<endl;
       cout<<number<<endl;
   
       cout<<"c2 is : "<<endl;
       cout<<para.number<<endl;
   
    } 
};

int main() {

    cout << "Hello world!"<<endl;
    cout << "Welcome to my program"<<endl<<endl;
    
    swapping c1, c2;
    
    cout<<"For c1 : "<<endl;
    c1.getdetails();
    cout<<"For c2 : "<<endl;
    c2.getdetails();
    
    
    cout<<"After doing  c1 = c2 : "<<endl;
    
    c1 = c2;

    cout<<"So, our variable is swapped. "<<endl;
    
    return 0;
}
