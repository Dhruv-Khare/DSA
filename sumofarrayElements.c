#include<stdio.h>
int sumofarray(int arr[],int N)
{
  if(N<0)
  return 0;
  else
  return arr[N]+sumofarray(arr,N-1);
}
int main()
{
  int arr[10]={1,2,3,4,5,6,7,8,9,10};
  int sum=sumofarray(arr,9);
  printf("%d",sum);
}