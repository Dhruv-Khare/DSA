#include <stdio.h>

void insert(int arr[], int n, int i, int x)
{
  for (int j = n - 1; j >=i; j--)
  {
    arr[j + 1] = arr[j];
  }
  arr[i] = x;
  n = n + 1;
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  insert(arr, 5, 2, 10);
  return 0;
}