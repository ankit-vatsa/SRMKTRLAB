#include <iostream>
using namespace std;

template <typename custom>
void square(custom A)
{
    cout<<"Square of "<<A<<" is : "<<A*A<<endl;
}

int main() {
    // Write C++ code here
    std::cout << "Hello world!\n Give input"<<endl;
    int a;
    float b;
    double c;
    cin>>a;
    cin>>b;
    cin>>c;
    
    square(a);
    square(b);
    square(c);
   
    return 0;
}
