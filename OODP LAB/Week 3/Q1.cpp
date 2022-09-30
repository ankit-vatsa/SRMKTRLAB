/* Create a class named &#39;Student&#39; with a string variable &#39;name&#39; and an integer variable
&#39;roll_no&#39;. Assign the value of roll_no as &#39;2&#39; and that of name as &quot;John&quot; by creating an
object of the class Student. */
#include <iostream>

using namespace std;

  class Student
  {
    string name;
    int roll_no;
    
    public:
    
    void getDetails()
    {
        cout<<"Enter Name :\n";
        cin>>name;
        cout<<"Enter Roll Number :\n";
        cin>>roll_no;
    }
    
    void match_data()
    {
        cout<<roll_no<<" "<<name<<endl;
    }
  };
  
int main() 
{
     Student ankit;
     
     ankit.getDetails();
     
     ankit.match_data();

    return 0;
}
