#include <iostream>
using namespace std;

template <typename custom>
void swap(custom * A, custom * B)
{
    custom temp;
    temp = *A;
    *A=*B;
    *B=temp;
}

int main() {
    // Write C++ code here
    std::cout << "Hello world!\n Give input"<<endl;
    int a,b;
    float c,d;
    char x,y;
    
    cin>>a>>b;
    cin>>c>>d;
    cin>>x>>y;
    
    cout<<"a="<<a<<"b="<<b<<endl;
    cout<<"c="<<c<<"d="<<d<<endl;
    cout<<"x="<<x<<"y="<<y<<endl<<endl;

    swap(&a,&b);
    swap(&c,&d);
    swap(&x,&y);
    
    cout<<"a="<<a<<",b="<<b<<endl;
    cout<<"c="<<c<<",d="<<d<<endl;
    cout<<"x="<<x<<",y="<<y<<endl;

    return 0;
}
