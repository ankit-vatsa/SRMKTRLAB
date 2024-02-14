#include <iostream>

using namespace std;

int main()
{
float num1, num2;
char symbol;

cout<<"This is my calculator."<<endl<<endl;

cout<<"Enter number 1:"<<endl;
cin>>num1;
cout<<"Enter number 2:"<<endl;
cin>>num2;

cout<<"Enter the operator + or - or * or / or else enter 0 to calculate all:"<<endl;
cin>>symbol;


switch(symbol){
case '+':
    cout<<num1<<"+"<<num2<<"="<<num1+num2;
break;
case '-':
    cout<<num1<<"-"<<num2<<"="<<num1-num2;
break;
case '*':
    cout<<num1<<"*"<<num2<<"="<<num1*num2;
break;
case '/':
    cout<<num1<<"/"<<num2<<"="<<num1/num2;
break;
default:
    cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
    cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
    cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
    cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
}

return 0;
}
