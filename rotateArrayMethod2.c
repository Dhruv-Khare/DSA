#include<stdio.h>
void traverse(int arr[],int n)
{
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void arrayInsert(int arr[],int n,int x){
      for(int j=n-1;j>0;j--){
        arr[j+1]=arr[j];
      }
      arr[0]=x;
}
void rotateArrayMethod2(int arr[],int n,int k)
{
    k=k%n;
    for(int i=0;i<k;i++)
    {
        arrayInsert(arr[i],n,arr[n-1]);
    }
      traverse(arr,n);
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int k=4;
    rotateArrayMethod2(arr,10,k);
    return 0;
}
