/* Consider the situation when you need to write a c++ program which 
prints number from 1 to 10 and but not 6. It is specified that you have to
do this using loop and only one loop is allowed to use. */

#include <iostream>

using namespace std;

int main()
{
    
for(int i=1; i<11; i++)
{
    if (i==6)
    {
        continue;
    }
    cout<<i<<endl;
}

return 0;
}
