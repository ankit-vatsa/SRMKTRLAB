#include <iostream>
using namespace std;

template <typename custom>
void Duplicate(custom arr[], int size)
{
    int i, j;
    printf("Repeating elements are ");
    for(i = 0; i < size; i++)
    {
        for(j = i+1; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
                cout<<arr[i]<<", ";
            }
        }
    }
}

int main() {

    int arr[]={1,2,3,3,5,2,6,7,5,10};
    float array[]={1.1,2.1,3.1,3.1,5.1,2.1,6.1,7.1,5.1,10.1};
    double prray[]={100,200,300,400,500,200,100};

    Duplicate(arr,10);
    cout<<endl;
    Duplicate(array,10);
    cout<<endl;
    Duplicate(prray,7);
   
    return 0;
}
