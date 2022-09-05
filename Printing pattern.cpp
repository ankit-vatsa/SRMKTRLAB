#include <iostream>

using namespace std;

int main(){
int num;
cout<<"Enter the highest number want to initialize\n";
scanf("%d",&num);
for(int i=num;i>0;i--)
{
for(int j=i;j>0;j--)
cout<<i;
cout<<endl;
}
return 0;
}
