#include <iostream>

using namespace std;

    class converter
    {
        private:
            int num;
        public:
            converter()
            {
                cout<<"Please enter a decimal number:"<<endl;
                cin>>num;
            }
    ~converter()
    {
        string r;
        while(num!=0) {r=(num%2==0 ?"0":"1")+r; num/=2;}
        cout<<"\nBinary Number:"<<r;
    }
};

int main()
{
    converter num;
    return 0;
}
