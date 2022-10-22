/* Write a c++ program to calculate the area of rectangle, circle and square using pure virtual function */
#include <iostream>
using namespace std;

class Calculator
{
protected:
    float length[4];

public:
    virtual void getdetails() = 0;
    virtual void printdetails() = 0;
    // Calculator(){    }
};

class square : public Calculator
{
public:
    void getdetails()
    {
        cout << "Enter length of the side of a Square : " << endl;
        cin >> length[0];
        printdetails();
    }
    void printdetails()
    {
        cout << "Area of the Square is : " << length[0] * length[0] << endl;
    }
};
class rectangle : public Calculator
{
public:
    void getdetails()
    {
        cout << "Enter length of a Rectangle : " << endl;
        cin >> length[1];
        cout << "Enter width of a Rectangle : " << endl;
        cin >> length[2];
        printdetails();
    }
    void printdetails()
    {
        cout << "Area of the Rectangle is : " << length[1] * length[2] << endl;
    }
};
class circle : public Calculator
{
public:
    void getdetails()
    {
        cout << "Enter radius of a Circle : " << endl;
        cin >> length[3];
        printdetails();
    }
    void printdetails()
    {
        cout << "Area of the Circle is : " << 3.14 * length[3] * length[3] << endl;
    }
};

int main()
{
    Calculator *ankit = new square;
    Calculator *vatsa = new rectangle;
    Calculator *vat = new circle;

    ankit->getdetails();
    vatsa->getdetails();
    vat->getdetails();

    return 0;
}
