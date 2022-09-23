#include <iostream>

using namespace std;

class Cube
{
  int num;

  public:
     Cube()
    {
        cout<<"Please enter the number"<<endl;
        cin>>num;
    }

    void cube_root()
    {
        for(int i=1;i<=num;i++)
        {
            cout<<"Cube of "<<i<<" is : "<<i*i*i<<endl;
        }
    }

    ~Cube()
	{
		cout<<" clear :"<<endl;
	}
};

int main()
{
    Cube number;
    number.cube_root();

    return 0;
}
