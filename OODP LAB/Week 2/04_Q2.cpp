/* Write C++ program to find if an integer is positive, negative or zero */
#include <iostream>

using namespace std;

class signofnumber
{
    int num;
    
    public:
    
     void getDetails()
    {
      cout << "Enter a number : "<<endl;
      cin >> num;

      cout<<"Entered number is : "<<num<<endl;
    }
    
    void ope()
    {
            if(num>0)
        {
            cout<<"The given number "<<num<<" is a positive number";
        }
        if (num<0)
        {
            cout<<"The given number "<<num<<" is a negative number";
        }
        if (num==0)
        {
            cout<<"The number zero is neither positive nor negative.";
        }
    }
    
};

int main() {
    signofnumber Ankit;
    
    Ankit.getDetails();
    
    Ankit.ope();

    return 0;
}
