#include<stdio.h>
void traverse(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    printf("%d",arr[i]);
  }
}
void deleteArray(int arr[],int n,int i){
  int x=arr[i];
  for(int j=i+1;j<=n-1;j++)
  {
    arr[j-1]=arr[j];
  }
  n=n-1;
  traverse(arr,n);
}
int main()
{
  int arr[]={1,2,3,4,5};
   cou
  deleteArray(arr,5,1);
  return 0;

}