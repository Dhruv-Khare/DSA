#include<iostream>
using namespace std;
void traverse(int a[],int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  cout<<'\n';
}
void bubblesort(int a[],int n)
{
   int flag=1;
   for(int i=1;i<n-1&&flag==1;i++)
   {
    flag=0;
    for(int j=0;j<n-i-1;j++)
    {
      if(a[j]>a[j+1])
      {
        swap(a[j],a[j+1]);
        flag=1;
      }
    }
   }
   traverse(a,n);
}
void selctionsort(int a[],int n)
{
    for(int i=0;i<n-2;i++)
    {
      int min=i;
      for(int j=i+1;j<n-1;j++)
      {
        if(a[j]<a[min])
        {
          min=j;
        }
      }
      swap(a[i],a[min]);
    }
    traverse(a,n);
}
void insertionsort(int a[],int n)
{
  for(int i=1;i<n-1;i++)
  {
   int k=a[i];
    int j=i-1;
    while(j>=0&&a[j]>k)
    {
      a[j+1]=a[j];
      j=j-1;
    }
    a[j+1]=k;
  }
  traverse(a,n);
}
int main()
{
   int a[10]={20,30,40,12,15,10,16,20,50,90};
   bubblesort(a,10);
   selctionsort(a,10);
   insertionsort(a,10);
   return 0;
}