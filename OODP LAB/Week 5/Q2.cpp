/* Suppose you have a Piggie Bank with an initial amount of $50 and you have to add
some more amount to it. Create a class 'AddAmount' with a data member named
'amount' with an initial value of $50. Now make two constructors of this class as
follows:
1 - without any parameter - no amount will be added to the Piggie Bank
2 - having a parameter which is the amount that will be added to the Piggie Bank
Create an object of the 'AddAmount' class and display the final amount in the Piggie
Bank. */
#include <iostream>

using namespace std;

class AddAmount
{
    int amount;
  public:
    AddAmount()
    {
        amount = 50;
    }

    AddAmount(int a)
    {
        amount = 50;
        amount = a+amount;
    }

    void print_amount()
    {
        cout << amount << endl;
    }
};

int main()
{
    AddAmount amount_01;
    AddAmount amount_02(111);
  
    cout<<"Running constructor without any parameter : "<<endl;
    amount_01.print_amount();
 
    cout<<"Running constructor with parameter : "<<endl;
    amount_02.print_amount();
  
    return 0;
}                                 
