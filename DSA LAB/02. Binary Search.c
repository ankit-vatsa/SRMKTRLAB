#include <stdio.h>

int binarySearch (int array[], int x, int low, int high) {

  while (low <= high) {
    int mid = low + (high - low) / 2;                               

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main() 
{
  int x,n;
  
  printf("Enter the size of array\n");
  scanf("%d",&n);
  
  int array[n];
  
  printf("Enter the values of array\n");
  for (int j =0; j<n; j++)
  {
      scanf("%d", &array[j]);
  }
  
  n = sizeof(array) / sizeof(array[0]);
  
  printf("Enter the number you want to find\n");
  scanf("%d", &x);
  
  int result = binarySearch(array, x, 0, n - 1);
  
  if (result == -1)
  {
    printf("Not found");
  }
  else
  {
    printf("Element is found at index %d", result);
  }
  return 0;
}
