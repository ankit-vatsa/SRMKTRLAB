#include <iostream>
using namespace std;

class polygon
{
    public:
        virtual void getdetails() = 0;
        virtual void area() = 0;
};

class rectangle : public polygon
{
    int length, breadth;
    public:
    void getdetails()
    {
        cout<<"length"<<endl;
        cin>>length;
        cout<<"breadth"<<endl;
        cin>>breadth;
    }

    void area()
    {
        cout<<"Area of the rectangle is : "<<length * breadth;
    }
};

class triangle : public polygon
{
    int base, height;
    public:
    void getdetails()
    {
        cout<<endl<<"base"<<endl;
        cin>>base;
        cout<<"height"<<endl;
        cin>>height;
    }

    void area()
    {
        cout<<"Area of the triangle is : "<<base * height / 2;
    }
};

int main()
{/*
    rectangle obj1;
    triangle obj2;
    obj1.getdetails();
    obj1.area();
    obj2.getdetails();
    obj2.area();
    */

    polygon *ank = new rectangle();
    polygon *vat = new triangle();
    ank->getdetails();
    ank->area();
    vat->getdetails();
    vat->area();
    return 0;
}
