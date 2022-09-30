/* Create a class to print the area of a square and a rectangle. The class has two
functions with the same name but different number of parameters. The function for
printing the area of rectangle has two parameters which are its length and breadth
respectively while the other function for printing the area of square has one
parameter which is the side of the square. */
#include <iostream>

using namespace std;

class Area
{
  public:
    void print_area(int length, int breadth)
    {
        cout <<"Length : " << length<<endl;
        cout <<"Width : " << breadth<<endl;
        cout <<"Area of the rectangle is : "<<length*breadth << endl;
    }

    void print_area(int side)
    {
        cout <<"Side : " << side<<endl;
        cout <<"Area of the square is : "<<side*side << endl;
    }
};

int main()
{
    Area rectangle, square;
  
    square.print_area(7);
    rectangle.print_area(7,8);
  
    return 0;
}
