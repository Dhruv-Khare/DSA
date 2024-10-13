#include <stdio.h>
void nonRepeated(int arr[], int n, int max)
{
  int dat[5] = {0};
  for (int i = 0; i < n - 1; i++)
  {
    int x = arr[i];
    dat[x] = dat[x] + 1;
  }
  for (int i = 0; i < max; i++)
  {
    if (dat[i] == 1)
      printf("%d", i);
  }
}
int main()
{
  int arr[] = {1, 1, 2, 3, 4, 4, 5, 5};
  nonRepeated(arr, 8, 5);
  return 0;
}