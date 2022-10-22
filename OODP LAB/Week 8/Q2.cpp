/* Write C++ program to demonstrate the use of virtual function */
#include <iostream>
using namespace std;

class Employee
{
protected:
    string name;
    string pro_language;

public:
    void getdetails()
    {
        cout << "Enter Name : " << endl;
        cin >> name;
        cout << "Enter Programming Language : " << endl;
        cin >> pro_language;
    }
   virtual void printdetails()
    {
        cout << endl
             << "Name entered is : " << name << endl
             << endl;
    }
};

class Programmer : public Employee
{
public:
    void printdetails()
    {
        cout << endl
             << "Programming language known is : " << endl
             << pro_language << endl
             << endl;
    }
};

int main()
{
    Programmer object;

    cout << "Conventional way : " << endl
         << endl;
    object.getdetails();
    object.printdetails();

    cout << "Making base class pointer and storing derived class address in it : " << endl
         << endl;
    Employee *pointer_base1;
    pointer_base1 = &object;
    pointer_base1->getdetails();
    pointer_base1->printdetails();

    cout << "Making base class pointer and with pointer type of derived class : " << endl
         << endl;
    Employee *pointer_base2;
    pointer_base2 = new Programmer;
    pointer_base2->getdetails();
    pointer_base2->printdetails();

    return 0;
}

/*
    Wihtout using Virtual Keyword :
    
                Conventional way : 

                Enter Name :       
                Ankit
                Enter Programming Language : 
                C

                Programming language known is : 
                C

                Making base class pointer and storing derived class address in it :

                Enter Name :
                Ankit 
                Enter Programming Language : 
                Cpp

                Name entered is : Ankit

                Making base class pointer and with pointer type of derived class :

                Enter Name :
                Ankit
                Enter Programming Language :
                Python

                Name entered is : Ankit
                
    Using virtual keyword : 
    
                Conventional way : 

                Enter Name :       
                Ankit
                Enter Programming Language : 
                C  

                Programming language known is : 
                C

                Making base class pointer and storing derived class address in it : 

                Enter Name : 
                Ankit 
                Enter Programming Language : 
                Cpp

                Programming language known is : 
                Cpp

                Making base class pointer and with pointer type of derived class : 

                Enter Name : 
                Ankit
                Enter Programming Language : 
                Python

                Programming language known is :
                Python
*/
