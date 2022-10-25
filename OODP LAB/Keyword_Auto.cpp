#include <iostream>
using namespace std;

auto tmkoc()
{
    cout<<"I am a hero."<<endl;
}

auto tmkoc(auto a, auto b)
{
    auto temp = a + b;
    cout<<"Result of the expression is : "<<temp<<endl;
}

auto tmkoc(auto a, auto b, auto c)
{
    auto temp = a + b + c;
    cout<<"Result of the expression is : "<<temp<<endl;
}

int main() {

    std::cout << "Hello world!"<<endl;
    
    tmkoc();
    tmkoc(5,7); 
    tmkoc(5.4,7.8); 
    tmkoc(111111111,0); 
    tmkoc(5,7,8);
    tmkoc(5.25,7.2,8.50);

    return 0;
}

/*
  Output:
      Hello world!
      I am a hero.
      Result of the expression is : 12
      Result of the expression is : 13.2
      Result of the expression is : 111111111
      Result of the expression is : 20
      Result of the expression is : 20.95
*/
