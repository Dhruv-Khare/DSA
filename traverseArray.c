#include<stdio.h>
void traverse(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    printf("%d",arr[i]);
  }
}

int main()
{
  int arr[]={1,2,3,4,5,6,7,8,9};
  traverse(arr,9);
}