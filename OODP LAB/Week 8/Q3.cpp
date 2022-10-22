/* Write a c++ program to Add members of two different classes using friend functions */
#include <iostream>
using namespace std;

class Vatsa;
class Ankit
{
    int num1;

public:
    Ankit()
    {
        cout << "Enter number 1 : " << endl;
        cin >> num1;
    }
    friend void sumof(Ankit a, Vatsa b);
};

class Vatsa
{
    int num2;

public:
    Vatsa()
    {
        cout << "Enter number 2 : " << endl;
        cin >> num2;
    }
    friend void sumof(Ankit a, Vatsa b);
};

void sumof(Ankit a, Vatsa b)
{
    cout << "Sum of number 1 and number 2 is = " << a.num1 + b.num2 << endl;
}

int main()
{
    Ankit obj1;
    Vatsa obj2;

    sumof(obj1, obj2);

    return 0;
}

/*
 Output:
    Enter number 1 : 
    5
    Enter number 2 : 
    7
    Sum of number 1 and number 2 is = 12
*/
