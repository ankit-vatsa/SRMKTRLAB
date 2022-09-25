#include <stdio.h>

    int linearsearch (int ankit[], int num, int value)
    {
      for (int i = 0; i<num; i++)
       {
            if (ankit[i]==value)
            {
               return i+1;
            }
       }  
    }
    
int main()
{
  int value,n;
  
  printf("Enter the size of array\n");
  scanf("%d",&n);
  
  int arr[n];
  
  printf("Enter the values of array\n");
  
  for (int j =0; j<n; j++)
  {
      scanf("%d", &arr[j]);
  }
  
  int num = sizeof(arr) / sizeof(arr[0]); 
  
  printf("Enter the number you want to find\n");
  scanf("%d", &value);
  
  int place = linearsearch (arr, num, value); 
  
  printf("The elements of the array are : ");  
  
  for (int i = 0; i < n; i++)  
  { 
      printf("%d, ", arr[i]);
  }   
      printf("\nElement trying to search is : %d", value);  
      if (place == -1) 
      {
      printf("\nElement is not present in the given array");  
      }
      else  
      {
      printf("\nElement is present at %d index and %d position of array.", place-1, place); 
      }
    
    return 0;
}
