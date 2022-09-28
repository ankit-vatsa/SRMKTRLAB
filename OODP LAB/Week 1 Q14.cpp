/* 14.Write a C++ program to sum of two given integers. However, if the sum is between 105 to 200 it will return 200. */
#include <iostream>

using namespace std;

int main()
{
    int num1, num2,sum;
    
        cout<<"Enter the integer 1\n";
        cin>>num1;

        cout<<"Enter the integer 2\n";
        cin>>num2;

        sum = num1 + num2;

    if(sum>105 && sum<200)
    {
        cout<<"200";
    }
    
    else
    {
        printf("%d", sum);
    }
    
return 0;
    
}
