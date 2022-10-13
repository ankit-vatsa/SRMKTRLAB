/*Write a C++ program to find area of square, rectangle, Circle and triangle using operator
overloading.*/
#include <iostream>

using namespace std;

class areaofshapes
{
    float length;

public:
    void getdetails()
    {
        cout << "Enter the value : " << endl;
        cin >> length;
    }

    void operator*(areaofshapes object)
    {
        double temp = length * object.length;
        cout << temp << endl;
    }
    
    void Area(areaofshapes Sq)
    {
        cout << "Area of the Square is : " << endl;
        Sq *Sq;
    }

    void circleArea(areaofshapes para1, areaofshapes para2)
    {
        cout << "Area of the Circle is : " << endl;
        para1 *para2;
    }

    void Area(areaofshapes para1, areaofshapes para2)
    {
        cout << "Area of the Rectangle is : " << endl;
        para1 *para2;
    }
};

int main()
{
    areaofshapes square_side, rectangle, rectangle_len, rectangle_width, circle, circle_radius, Pie, triangle, triangle_const, triangle_base, triangle_height;

    cout << "Enter measurements of Square" << endl
         << endl;
    cout << "Length of the side : " << endl;
    square_side.getdetails();
    square_side.Area(square_side);

    cout << endl
         << "Enter measurements of Rectangle" << endl
         << endl;
    cout << "Length : " << endl;
    rectangle_len.getdetails();
    cout << "Width : " << endl;
    rectangle_width.getdetails();
    rectangle.Area(rectangle_len, rectangle_width);

    cout << endl
         << "Enter measurements of Circle" << endl
         << endl;
    cout << "Enter the value of Pie : " << endl;
    Pie.getdetails();
    cout << "Radius : " << endl;
    circle_radius.getdetails();
    circle.circleArea(Pie, circle_radius);

    return 0;
}
