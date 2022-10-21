/* Write a C++ program to read and print employee information using multiple inheritance. */
#include <iostream>
using namespace std;

class Employee
{
    int emp_id;
    string emp_name;
    string emp_level;
    public:
    void getdetails()
    {
        cout<<"Enter employee id : "<<endl;
        cin>>emp_id;
        cout<<"Enter employee name : "<<endl;
        cin>>emp_name;
        cout<<"Enter employee post level : "<<endl;
        cin>>emp_level;
    }
    void printdetails()
    {
        cout<<"Employee id : "<<emp_id<<endl;
        cout<<"Employee name : "<<emp_name<<endl;
        cout<<"Employee post level : "<<emp_level<<endl;
    }
};

class Assistant
{
    int lab_num;
    string lab_name;
    string postname;    
    string experience;
    
    public:
    void get_details()
    {
        cout<<"Enter lab number : "<<endl;
        cin>>lab_num;
        cout<<"Enter lab name : "<<endl;
        cin>>lab_name;
        cout<<"Enter Assistant Postname : "<<endl;
        cin>>postname;
        cout<<"Enter Assistant's experience : "<<endl;
        cin>>experience;
    }
    void print_details()
    {
        cout<<"Lab number : "<<lab_num<<endl;
        cout<<"Lab name : "<<lab_name<<endl;
        cout<<"Assistant Postname : "<<postname<<endl;
        cout<<"Assistant's experience : "<<experience<<endl;
    }
};

class Programmer : public Employee, public Assistant
{
    string language_known;
    int typingspeed;
    
    public:
    void getdata()
    {
        cout<<"Enter language known : "<<endl;
        cin>>language_known;
        cout<<"Enter typing speed : "<<endl;
        cin>>typingspeed;
    }
    void printdata()
    {
        cout<<"Language known : "<<language_known<<endl;
        cout<<"Typing speed : "<<typingspeed<<endl;
    }
};

int main() {

    Programmer name1;
    
    name1.getdetails();
    name1.get_details();
    name1.getdata();
    
    name1.printdetails();
    name1.print_details();
    name1.printdata();

    return 0;
}

/*
    Sample Input:
          Enter employee id : 
          2
          Enter employee name : 
          Ankit
          Enter employee post level : 
          5
          Enter lab number : 
          21
          Enter lab name : 
          OODP
          Enter Assistant Postname : 
          Supervisor
          Enter Assistant's experience : 
          10
          Enter language known : 
          C++
          Enter typing speed : 
          120
    Sample Output:
          Employee id : 2
          Employee name : Ankit
          Employee post level : 5
          Lab number : 21
          Lab name : OODP
          Assistant Postname : Supervisor
          Assistant's experience : 10
          Language known : C++
          Typing speed : 120
*/
