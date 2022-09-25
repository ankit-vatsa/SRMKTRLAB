#include <iostream>

using namespace std;

class VolofCube
{
  int length;

  public:
     VolofCube()
    {
        cout<<"Please enter the length of cube"<<endl;
        cin>>length;
    }

    void volume()
    {
        cout<<"Cube of length "<<length<<" has volume : "<<length*length*length<<endl;
    }

    ~VolofCube()
	{
		cout<<" Destructor executed."<<endl;
	}
};

int main()
{
    VolofCube Cube;
    Cube.volume();

    return 0;
}
