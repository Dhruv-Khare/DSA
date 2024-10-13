#include<stdio.h>
int sumofarray(int arr[],int i,int j)
{
  if(i>j)
  return 0;
  else
  {
    if(i==j)
    return arr[j];
    else
    return arr[i]+arr[j]+sumofarray(arr,i+1,j-1);
   
  }
}
int main()
{
  int arr[10]={1,2,3,4,5,6,7,8,9,10};
  int sum=sumofarray(arr,0,9);
  printf("%d",sum);
}