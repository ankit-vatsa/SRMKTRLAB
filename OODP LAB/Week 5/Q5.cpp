/* Create a class 'Degree' having a function 'getDegree' that prints "I got a degree". It has
two subclasses namely 'Undergraduate' and 'Postgraduate' each having a function
with the same name that prints "I am an Undergraduate" and "I am a Postgraduate"
respectively. Call the function by creating an object of each of the three classes. */
#include <iostream>

using namespace std;

class Degree
{
  public:
    int getDegree()
    {
        return 0;
    }
};

class Undergraduate : public Degree
{
    int amount;
  public:
    Undergraduate(int a)
    {
        amount = a;
    }

    int getDegree()
    {
        cout<< "I got a degree.";
    }
};

class Postgraduate : public Degree
{
    int amount;
  public:
    Postgraduate(int a)
    {
        amount = a;
    }

    int getBalance()
    {
        return amount;
    }
};


int main()
{
    BankA amount_1(1000);
    BankB amount_2(1500);
    BankC amount_3(2000);
  
    cout << amount_1.getBalance() << endl;
    cout << amount_2.getBalance() << endl;
    cout << amount_3.getBalance() << endl;
  
    return 0;
} 
