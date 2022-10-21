/* Write a C++ Program to find area and volume using mulitple inheritance.  */
#include <iostream>
using namespace std;

class Area
{
    float length[5];

public:
    void square()
    {
        cout << "Enter side of Square : " << endl;
        cin >> length[0];
        cout << "Area of the Square is : " << endl
             << length[0] * length[0] << endl;
    }
    void rectangle()
    {
        cout << "Enter length of Rectangle : " << endl;
        cin >> length[1];
        cout << "Enter breadth of Rectangle : " << endl;
        cin >> length[2];
        cout << "Area of the Rectangle is : " << endl
             << length[1] * length[2] << endl;
    }
    void triangle()
    {
        cout << "Enter base of Triangle : " << endl;
        cin >> length[3];
        cout << "Enter height of Triangle : " << endl;
        cin >> length[4];
        cout << "Area of the Triangle is : " << endl
             << length[3] * length[4] / 2 << endl;
    }
    void option_area()
    {
        cout << "Currently we support only the following shapes." << endl
             << "Choose among the following options : " << endl;
        cout << "1. Square" << endl
             << "2. Rectangle" << endl
             << "3. Triangle" << endl;
        int temp;
        cin >> temp;
        switch (temp)
        {
        case 1:
            square();
            break;
        case 2:
            rectangle();
            break;
        case 3:
            triangle();
            break;

        default:
            break;
        }
    }
};

class Volume
{
    float length[5];

public:
    void cube()
    {
        cout << "Enter side of Cube : " << endl;
        cin >> length[0];
        cout << "Volume of the Cube is : " << endl
             << length[0] * length[0] * length[0] << endl;
    }
    void cuboid()
    {
        cout << "Enter length of Cuboid : " << endl;
        cin >> length[1];
        cout << "Enter width of Cuboid : " << endl;
        cin >> length[2];
        cout << "Enter height of Cuboid : " << endl;
        cin >> length[3];
        cout << "Volume of the Cuboid is : " << endl
             << length[1] * length[2] * length[3] << endl;
    }
    void sphere()
    {
        cout << "Enter radius of Sphere : " << endl;
        cin >> length[4];
        cout << "Volume of the Sphere is : " << endl
             << 4 * 3.14 * length[4] * length[4] * length[4] / 3 << endl;
    }
    void option_volume()
    {
        cout << "Currently we support only the following shapes." << endl
             << "Choose among the following options : " << endl;
        cout << "1. Cube" << endl
             << "2. Cuboid" << endl
             << "3. Sphere" << endl;
        int ank;
        cin >> ank;
        switch (ank)
        {
        case 1:
            cube();
            break;
        case 2:
            cuboid();
            break;
        case 3:
            sphere();
            break;

        default:
            break;
        }
    }
};

class Shapes : public Area, public Volume
{
    string shape_name;

public:
    void getdetails()
    {
        cout << "Enter name of the shape : " << endl;
        cin >> shape_name;
        printdetails();
    }
    void printdetails()
    {
        cout << "Entered shape is : " << endl
             << shape_name << endl
             << endl;
    }
};

int main()
{
    Shapes Ankit;
    int vat;
    cout << "Enter 1 for Calculating Area" << endl
         << "Enter 2 for Calculating Volume" << endl;
    cin >> vat;

    switch (vat)
    {
    case 1:
        Ankit.getdetails();
        Ankit.option_area();
        break;
    case 2:
        Ankit.getdetails();
        Ankit.option_volume();
        break;

    default:
        break;
    }

    return 0;
}

/*
    Output of the above code:
    
            Enter 1 for Calculating Area  
            Enter 2 for Calculating Volume
            1
            Enter name of the shape : 
            Square
            Entered shape is :
            Square

            Currently we support only the following shapes.
            Choose among the following options :
            1. Square
            2. Rectangle
            3. Triangle
            1
            Enter side of Square :
            5
            Area of the Square is :
            25
*/
