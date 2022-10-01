/* 8. Develop a program of class Room with attributes length, breadth and height and its object
room1 and room2 to calculate the area and volume of a room using function. */
#include <iostream>

using namespace std;

  class Room
  {
      int length, breadth, height;
    public:
    
    void getDetails()
    {
        cout<<"Enter Length :\n";
        cin>>length;
        cout<<"Enter Breadth :\n";
        cin>>breadth;
        cout<<"Enter Height :\n";
        cin>>height;
        
        cout<<"Length is : "<<length<<endl;
        cout<<"Breadth is : "<<breadth<<endl;
        cout<<"Height is : "<<height<<endl;
    }
     float area_room()
    {
        float result = 2*(length*breadth+breadth*height+height*length);
        return result;
    }
     float vol_room()
    {
        float result = (length*breadth*height);
        return result;
    }
    
  };
  
int main() 
{
Room room1, room2;

cout<<"Enter details for Room 1"<<endl<<endl;
  
room1.getDetails();
cout<<"Area of the room 1 is : "<<room1.area_room()<<endl;
cout<<"Volume of the room 1 is : "<<room1.vol_room()<<endl<<endl;

cout<<"Enter details for Room 2"<<endl<<endl;
  
room2.getDetails();
cout<<"Area of the room 2 is : "<<room2.area_room()<<endl;
cout<<"Volume of the room 2 is : "<<room2.vol_room()<<endl;
    
    return 0;
}
