//Program Description 
/* Write a C++ program that will display the calculator menu. The program will prompt the user to choose the operation choice (from 1 to 5). 
Then it asks the user to input two integer vales for the calculation. See the sample below.
MENU 1. Add 2. Subtract 3. Multiply 4. Divide 5. Modulus
Enter your choice: 1
Enter your two numbers: 12 15 Result: 27 */

#include <iostream>

using namespace std;

int main()
{   
    int num1,num2;
    cout<<"Welcome to this Calculator"<<endl;
    cout<<"Enter num1"<<endl;
    cin>>num1;
    cout<<"Enter num2"<<endl;
    cin>>num2;
    
    cout<<"Press 1 for Addition"<<endl<<"Press 2 for Subtraction"<<endl
    <<"Press 3 for Multiplication"<<endl<<"Press 4 for Division"<<endl<<"Press 5 for Modulus"<<endl;
    int a;
    cin>>a;
    switch(a)
    {
    case 1 : cout<<"Your answer is : "<<num1 + num2; break;
    case 2 : cout<<"Your answer is : "<<num1 - num2; break;
    case 3 : cout<<"Your answer is : "<<num1 * num2; break;
    case 4 : cout<<"Your answer is : "<<num1 / num2; break;
    case 5 : cout<<"Your answer is : "<<num1 % num2; break;
    default : cout<<"Thank you for using this calculator"<<endl;
    }

    return 0;
}
