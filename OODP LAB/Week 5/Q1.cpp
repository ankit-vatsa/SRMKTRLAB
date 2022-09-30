/* Write a program to print the names of students by creating a Student class. If no
name is passed while creating an object of the Student class, then the name should
be "Unknown", otherwise the name should be equal to the String value passed while
creating the object of the Student class. */

#include <iostream>

using namespace std;

class Student
{
    string name;
    
  public:
  
    Student(string ss)
    {
        name = ss;
    }
    Student()
    {
        name = "Unknown";
    }
    void print_name()
    {
        cout << name << endl;
    }
};

int main()
{
    Student student1("Ankit Vatsa");
    Student student2;
  
    cout<<"Execution of constructor with argument alongwith the making of object : "<<endl;
    student1.print_name();
  
    cout<<"Execution of constructor without any argument alongwith the making of object : "<<endl;
    student2.print_name();
  
    return 0;
}                                  
