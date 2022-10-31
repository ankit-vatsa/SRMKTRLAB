/* Write a Function Template in C++ to perform sorting of n items. The items can be of
type int, float, etc., */
#include <iostream>
using namespace std;

template <class custom>

void sort(custom *arr)
{
    for (int i = 0; i<10-1;i++)
    {
        for (int j = 0; j<10-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
               custom temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1]=temp;
            }
        }
    }
    
}

int main() {
    // Write C++ code here
    std::cout << "Hello world!\n";
    cout<<"For integer values : ";
    int arr[10]={10,12,13,1,4,5,6,7,14,20};
    sort(arr);

    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<", ";
    }
    
    cout<<"\n\nFor float values : ";
    float array[10]={10.2,12.5,13.4,1.2,4.9,5.5,6.0,7.4,14.6,20.88};
    sort(array);

    for(int i=0;i<10;i++)
    {
        cout<<array[i]<<", ";
    }
    
    return 0;
}
